// Dialog_PROESS.cpp : 实现文件
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_PROESS.h"
#include "afxdialogex.h"


// CDialog_PROESS 对话框

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


// CDialog_PROESS 消息处理程序

PROCESS_INFORMATION pi;

void CDialog_PROESS::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	//STAR
	// TODO: 在此添加控件通知处理程序代码
	STARTUPINFOA si = { sizeof(si) };
	TCHAR ws[256] = L"notepad.exe d:\\1.txt";
	CreateProcessA(NULL, "notepad.exe d:\\1.txt", NULL, NULL, false, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	//CreateProcess(NULL,L"notepad.exe d:\\1.txt",NULL,NULL,false,NORMAL_PRIORITY_CLASS,NULL,NULL,&si,&pi);
}

//正常结束
void CDialog_PROESS::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码

	TerminateProcess(pi.hProcess,1);
	TerminateThread(pi.hThread,1);
}

//强制结束(任务管理器的结束方式 提示报错)
void CDialog_PROESS::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	//强制退出 清理的工作还没完成
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
	// TODO:  在此添加控件通知处理程序代码
	DWORD tid;
	//创建新线程
	th = CreateThread(NULL, 0, ThreadProc1, 0, CREATE_SUSPENDED, &tid);
}


void CDialog_PROESS::OnBnClickedButton5()
{
	// TODO:  在此添加控件通知处理程序代码
	ResumeThread(th); //恢复线程
}


void CDialog_PROESS::OnBnClickedButton6()
{
	// TODO:  在此添加控件通知处理程序代码
	SuspendThread(th);//挂起线程
}


void CDialog_PROESS::OnBnClickedButton7()
{
	// TODO:  在此添加控件通知处理程序代码
	TerminateThread(th, 11);
}


void CDialog_PROESS::OnBnClickedRadio1()
{
	// TODO:  在此添加控件通知处理程序代码
	SetPriorityClass(GetCurrentProcess(), IDLE_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio2()
{
	// TODO:  在此添加控件通知处理程序代码
	SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio3()
{
	// TODO:  在此添加控件通知处理程序代码
	SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio4()
{
	// TODO:  在此添加控件通知处理程序代码
	SetPriorityClass(GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio5()
{
	// TODO:  在此添加控件通知处理程序代码
	SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio6()
{
	// TODO:  在此添加控件通知处理程序代码
	SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
}


void CDialog_PROESS::OnBnClickedRadio7()
{
	// TODO: 在此添加控件通知处理程序代码
	BOOL r = 0;
	UpdateData(true);
	switch (m_radio_thread_selNum)
	{
	case 0:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_IDLE); //设置为 最低
		TRACE("thread=%d,%04x  set priority to THREAD_PRIORITY_IDLE \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 1:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_LOWEST);//设置为 较低
		TRACE("thread=%d,%04x  set priority to THREAD_PRIORITY_LOWEST \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 2:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL); //设置为 低于标准
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_BELOW_NORMAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 3:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_NORMAL);  //设置为 标准
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_NORMAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 4:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_ABOVE_NORMAL);  //设置为 高于标准
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_ABOVE_NORMAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 5:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);  //设置为 较高
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_HIGHEST \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	case 6:
		r = SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);  //设置为 最高
		TRACE("thread=%d,%04X  set priority to THREAD_PRIORITY_TIME_CRITICAL \n", GetCurrentThreadId(), GetCurrentThreadId());
		break;
	default:
		break;

	}
}


void CDialog_PROESS::OnBnClickedRadio8()
{
	// TODO:  在此添加控件通知处理程序代码
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio9()
{
	// TODO:  在此添加控件通知处理程序代码
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio10()
{
	// TODO:  在此添加控件通知处理程序代码
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio11()
{
	// TODO:  在此添加控件通知处理程序代码
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio12()
{
	// TODO:  在此添加控件通知处理程序代码
	OnBnClickedRadio7();
}


void CDialog_PROESS::OnBnClickedRadio13()
{
	// TODO:  在此添加控件通知处理程序代码
	OnBnClickedRadio7();
}
