// Dialog_Timer_.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_Timer_.h"
#include "afxdialogex.h"
#define myTimerID 1001
#define myTimerID2 1002

// CDialog_Timer_ �Ի���
CDialog_Timer_* pthis;

IMPLEMENT_DYNAMIC(CDialog_Timer_, CDialogEx)

CDialog_Timer_::CDialog_Timer_(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_Timer_::IDD, pParent)
	, m_sTime(_T(""))
{

}

CDialog_Timer_::~CDialog_Timer_()
{
}

void CDialog_Timer_::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_sTime);
}


BEGIN_MESSAGE_MAP(CDialog_Timer_, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialog_Timer_::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialog_Timer_::OnBnClickedButton2)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON3, &CDialog_Timer_::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CDialog_Timer_::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CDialog_Timer_::OnBnClickedButton5)
END_MESSAGE_MAP()


// CDialog_Timer ��Ϣ�������
void CALLBACK EXPORT TimerProc(
	HWND hWnd,      // handle of CWnd that called SetTimer
	UINT nMsg,      // WM_TIMER
	UINT nIDEvent,   // timer identification
	DWORD dwTime    // system time
	)
{

	//if (nIDEvent==myTimerID) //
	if (nIDEvent == myTimerID2) //
	{
		//ִ�д���
		TRACE("my TimerProc %d\n", dwTime);
		//��ʾ��ǰʱ��
		time_t t;
		time(&t);
		tm *timeinfo = localtime(&t);
		TRACE("%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

	}
}

void CALLBACK EXPORT CDialog_Timer_::TimerProc2(
	HWND hWnd,      // handle of CWnd that called SetTimer
	UINT nMsg,      // WM_TIMER
	UINT nIDEvent,   // timer identification
	DWORD dwTime    // system time
	)
{
		//this=pthis;
	__asm
	{
		mov ecx, pthis
			mov this, ecx
	}

	//if (nIDEvent==myTimerID) //

	//ִ�д���
	TRACE("my TimerProc %d\n", dwTime);
	//��ʾ��ǰʱ��
	time_t t;
	time(&t);
	tm *timeinfo = localtime(&t);
	pthis->m_sTime.Format(L"%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);



	pthis->UpdateData(false);
}

// CDialog_Timer_ ��Ϣ�������


void CDialog_Timer_::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SetTimer(1001,1000,TimerProc );
}


LRESULT CDialog_Timer_::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: �ڴ����ר�ô����/����û���
	//if (message==WM_TIMER)
	//{
	// if (wParam==myTimerID) //
	// {
	//  //ִ�д���
	//  TRACE("1111111111\n");
	//  //��ʾ��ǰʱ��
	//  time_t t;
	//  time(&t);
	//  tm *timeinfo=localtime(&t);
	//  m_sTime.Format(L"%02d:%02d:%02d",timeinfo->tm_hour,timeinfo->tm_min,timeinfo->tm_sec);
	//  UpdateData(false);
	// }

	//}
	return CDialog::WindowProc(message, wParam, lParam);
}


void CDialog_Timer_::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	KillTimer(myTimerID);
}


void CDialog_Timer_::OnTimer(UINT_PTR nIDEvent)
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//if (nIDEvent == myTimerID) //
	//{
	//	//ִ�д���
	//	TRACE("1111111111\n");
	//	//��ʾ��ǰʱ��
	//	time_t t;
	//	time(&t);
	//	tm *timeinfo = localtime(&t);
	//	m_sTime.Format(L"%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
	//	UpdateData(false);
	//}
	CDialogEx::OnTimer(nIDEvent);
}


void CDialog_Timer_::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TIMERPROC tproc;
	__asm
	{
		//  mov tproc,TimerProc2
		mov eax, TimerProc2  //eax=TimerProc2
			mov tproc, eax    //tproc=eax
	}
	::SetTimer(m_hWnd, myTimerID2, 1000, tproc);
}


void CDialog_Timer_::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	::KillTimer(m_hWnd, myTimerID2);
}


void CDialog_Timer_::OnBnClickedButton5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	TimerProc2(NULL, 111, 111, 111);
}


BOOL CDialog_Timer_::OnInitDialog()
{
	CDialog::OnInitDialog();
	pthis = this;

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}
