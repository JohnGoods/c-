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
{

}

CDialog_PROESS::~CDialog_PROESS()
{
}

void CDialog_PROESS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_PROESS, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialog_PROESS::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialog_PROESS::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CDialog_PROESS::OnBnClickedButton3)
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
