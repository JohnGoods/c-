// Dialog_PROESS.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_PROESS.h"
#include "afxdialogex.h"


// CDialog_PROESS �Ի���

IMPLEMENT_DYNAMIC(CDialog_PROESS, CDialogEx)

CDialog_PROESS::CDialog_PROESS(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_PROESS::IDD, pParent)
	, m_radio_thread_selNum(0)
{

}

CDialog_PROESS::~CDialog_PROESS()
{
}

void CDialog_PROESS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO7, m_radio_thread_selNum);
}


BEGIN_MESSAGE_MAP(CDialog_PROESS, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialog_PROESS::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialog_PROESS::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CDialog_PROESS::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CDialog_PROESS::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CDialog_PROESS::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CDialog_PROESS::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CDialog_PROESS::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_RADIO1, &CDialog_PROESS::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CDialog_PROESS::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CDialog_PROESS::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO4, &CDialog_PROESS::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO5, &CDialog_PROESS::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CDialog_PROESS::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_RADIO7, &CDialog_PROESS::OnBnClickedRadio7)
	ON_BN_CLICKED(IDC_RADIO8, &CDialog_PROESS::OnBnClickedRadio8)
	ON_BN_CLICKED(IDC_RADIO9, &CDialog_PROESS::OnBnClickedRadio9)
	ON_BN_CLICKED(IDC_RADIO10, &CDialog_PROESS::OnBnClickedRadio10)
	ON_BN_CLICKED(IDC_RADIO11, &CDialog_PROESS::OnBnClickedRadio11)
	ON_BN_CLICKED(IDC_RADIO12, &CDialog_PROESS::OnBnClickedRadio12)
	ON_BN_CLICKED(IDC_RADIO13, &CDialog_PROESS::OnBnClickedRadio13)
END_MESSAGE_MAP()


// CDialog_PROESS ��Ϣ�������

PROCESS_INFORMATION pi;

void CDialog_PROESS::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//STAR
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	STARTUPINFOA si = { sizeof(si) };
	TCHAR ws[256] = L"notepad.exe d:\\1.txt";
	CreateProcessA(NULL, "notepad.exe d:\\1.txt", NULL, NULL, false, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	//CreateProcess(NULL,L"notepad.exe d:\\1.txt",NULL,NULL,false,NORMAL_PRIORITY_CLASS,NULL,NULL,&si,&pi);
}

//��������
void CDialog_PROESS::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	TerminateProcess(pi.hProcess,1);
	TerminateThread(pi.hThread,1);
}

//ǿ�ƽ���(����������Ľ�����ʽ ��ʾ����)
void CDialog_PROESS::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//ǿ���˳� ����Ĺ�����û���
	ExitProcess(1222);
}

DWORD WINAPI ThreadProc1(
	LPVOID lpParameter   // thread data
	)
{
	static int i = 0;
	while (1)
	{
		Sleep(1000);
		TRACE("thread  i=%d    \n", i++);
	}

	return 1;
}

HANDLE th;
void CDialog_PROESS::OnBnClickedButton4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	DWORD tid;
	//�������߳�
	th = CreateThread(NULL, 0, ThreadProc1, 0, CREATE_SUSPENDED, &tid);
}


void CDialog_PROESS::OnBnClickedButton5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	ResumeThread(th); //�ָ��߳�
}


void CDialog_PROESS::OnBnClickedButton6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SuspendThread(th);//�����߳�
}


void CDialog_PROESS::OnBnClickedButton7()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	TerminateThread(th, 11);
}


void CDialog_PROESS::OnBnClickedRadio1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SetPriorityClass(GetCurrentProcess(), IDLE_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SetPriorityClass(GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	BOOL r = 0;
	UpdateData(true);
	switch (m_radio_thread_selNum)
	{
	case 0:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_IDLE); //����Ϊ ���
		TRACE("thread=%d,%04x  set priority to THREAD_PRIORITY_IDLE \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 1:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_LOWEST);//����Ϊ �ϵ�
		TRACE("thread=%d,%04x  set priority to THREAD_PRIORITY_LOWEST \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 2:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL); //����Ϊ ���ڱ�׼
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_BELOW_NORMAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 3:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_NORMAL);  //����Ϊ ��׼
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_NORMAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 4:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_ABOVE_NORMAL);  //����Ϊ ���ڱ�׼
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_ABOVE_NORMAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 5:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);  //����Ϊ �ϸ�
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_HIGHEST \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 6:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);  //����Ϊ ���
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_TIME_CRITICAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	default:
		break;

	}
}


void CDialog_PROESS::OnBnClickedRadio8()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio9()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio10()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio11()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio12()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio13()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	OnBnClickedRadio7();
}
