// Dialog_Thread_Priority.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_Thread_Priority.h"
#include "afxdialogex.h"
#define WM_USER_MSG WM_USER+1

// CDialog_Thread_Priority �Ի���

IMPLEMENT_DYNAMIC(CDialog_Thread_Priority, CDialogEx)

CDialog_Thread_Priority::CDialog_Thread_Priority(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_Thread_Priority::IDD, pParent)
	, m_edt_time1(0)
	, m_edt_time2(0)
	, m_edt_time3(0)
	, m_edt_time4(0)
	, m_edt_time5(0)
	, m_edt_time6(0)
	, m_edt_time7(0)
{

}

CDialog_Thread_Priority::~CDialog_Thread_Priority()
{
}

void CDialog_Thread_Priority::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_edt_time1);
	DDX_Text(pDX, IDC_EDIT2, m_edt_time2);
	DDX_Text(pDX, IDC_EDIT3, m_edt_time3);
	DDX_Text(pDX, IDC_EDIT4, m_edt_time4);
	DDX_Text(pDX, IDC_EDIT5, m_edt_time5);
	DDX_Text(pDX, IDC_EDIT6, m_edt_time6);
	DDX_Text(pDX, IDC_EDIT7, m_edt_time7);
}


BEGIN_MESSAGE_MAP(CDialog_Thread_Priority, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialog_Thread_Priority::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialog_Thread_Priority::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CDialog_Thread_Priority::OnBnClickedButton3)
END_MESSAGE_MAP()


// CDialog_Thread_Priority ��Ϣ�������

DWORD WINAPI ThreadProc(
	LPVOID lpParameter   // thread data
	)
{
	UINT* i = (UINT*)lpParameter;
	int Num = 0;
	while (1)
	{
		*i = (*i)++;
		for (int j = 0; j <= 0x1FFFFFF; j++)
		{
			Num += j;
		}
		//  AfxGetApp()->m_pMainWnd->UpdateData(false);
		AfxGetApp()->m_pMainWnd->SendMessage(WM_USER_MSG, 0, 0);
		Sleep(20);//��ʱ������߳�20���� �ó�ʱ��Ƭ
	}

	return Num;
}

HANDLE tHandlethread[7];
DWORD  tid[7];
void CDialog_Thread_Priority::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int i = 0;
	tHandlethread[i] = CreateThread(NULL, 0, ThreadProc, &m_edt_time1, CREATE_SUSPENDED, &tid[i]);//CREATE_SUSPENDED
	SetThreadPriority(tHandlethread[i], THREAD_PRIORITY_IDLE);
	i++;
	tHandlethread[i] = CreateThread(NULL, 0, ThreadProc, &m_edt_time2, CREATE_SUSPENDED, &tid[i]);//CREATE_SUSPENDED
	SetThreadPriority(tHandlethread[i], THREAD_PRIORITY_LOWEST);
	i++;
	tHandlethread[i] = CreateThread(NULL, 0, ThreadProc, &m_edt_time3, CREATE_SUSPENDED, &tid[i]);//CREATE_SUSPENDED
	SetThreadPriority(tHandlethread[i], THREAD_PRIORITY_BELOW_NORMAL);
	i++;
	tHandlethread[i] = CreateThread(NULL, 0, ThreadProc, &m_edt_time4, CREATE_SUSPENDED, &tid[i]);//CREATE_SUSPENDED
	SetThreadPriority(tHandlethread[i], THREAD_PRIORITY_NORMAL);
	i++;
	tHandlethread[i] = CreateThread(NULL, 0, ThreadProc, &m_edt_time5, CREATE_SUSPENDED, &tid[i]);//CREATE_SUSPENDED
	SetThreadPriority(tHandlethread[i], THREAD_PRIORITY_ABOVE_NORMAL);
	i++;
	tHandlethread[i] = CreateThread(NULL, 0, ThreadProc, &m_edt_time6, CREATE_SUSPENDED, &tid[i]);//CREATE_SUSPENDED
	SetThreadPriority(tHandlethread[i], THREAD_PRIORITY_HIGHEST);
	i++;
	tHandlethread[i] = CreateThread(NULL, 0, ThreadProc, &m_edt_time7, CREATE_SUSPENDED, &tid[i]);//CREATE_SUSPENDED
	SetThreadPriority(tHandlethread[i], THREAD_PRIORITY_TIME_CRITICAL);
}


void CDialog_Thread_Priority::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	for (int i = 0; i<7; i++)
	{
		ResumeThread(tHandlethread[i]);
	}
}



void CDialog_Thread_Priority::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	for (int i = 0; i<7; i++)
	{
		SuspendThread(tHandlethread[i]);
	}
}


LRESULT CDialog_Thread_Priority::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO:  �ڴ����ר�ô����/����û���
	if (message == WM_USER_MSG)
	{
		UpdateData(false);
	}
	return CDialogEx::WindowProc(message, wParam, lParam);
}
