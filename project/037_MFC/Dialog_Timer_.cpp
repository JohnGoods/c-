// Dialog_Timer_.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_Timer_.h"
#include "afxdialogex.h"
#define myTimerID 1001

// CDialog_Timer_ �Ի���

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
END_MESSAGE_MAP()


// CDialog_Timer ��Ϣ�������
void CALLBACK EXPORT TimerProc(
	HWND hWnd,      // handle of CWnd that called SetTimer
	UINT nMsg,      // WM_TIMER
	UINT nIDEvent,   // timer identification
	DWORD dwTime    // system time
	)
{

	if (nIDEvent == myTimerID) //
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
