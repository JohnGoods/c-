
// 038_�ַ���תDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "038_�ַ���ת.h"
#include "038_�ַ���תDlg.h"
#include <string>
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMy038_�ַ���תDlg �Ի���



CMy038_�ַ���תDlg::CMy038_�ַ���תDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMy038_�ַ���תDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy038_�ַ���תDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMy038_�ַ���תDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMy038_�ַ���תDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMy038_�ַ���תDlg ��Ϣ�������

BOOL CMy038_�ַ���תDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMy038_�ַ���תDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMy038_�ַ���תDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMy038_�ַ���תDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMy038_�ַ���תDlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CString CString1="CString";
	//std::string string1="string";
	//CHAR * char1="char1";

	////һ��CString �ִ�ת string ,char*
	//string1=CString1;
	//char1=CString1.GetBuffer();
	//CString1.ReleaseBuffer();//�ͷŵ��ִ�������

	////����string תCString char*
	//string1="string1";
	//CString1=string1.data();
	////char1=string1.data();
	//new char[string1.length()+1];
	//strcpy(char1,string1.data());
	////����char* תCString ,string
	//char1="char1";
	//CString1=char1;
	//string1=char1;

	//// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CString CString1=L"CString";
	//std::wstring string1=L"string";
	//WCHAR * char1=L"char1";

	////һ��CString �ִ�ת string ,char*
	//string1=CString1;
	//char1=CString1.GetBuffer();
	//CString1.ReleaseBuffer();//�ͷŵ��ִ�������

	////����string תCString char*
	//string1=L"string1";
	//CString1=string1.data();
	////char1=string1.data();
	//new WCHAR[string1.length()+1];
	//wcscpy(char1,string1.data());
	////����char* תCString ,string
	//char1=L"char1";
	//CString1=char1;
	//string1=char1;

	//VS2013���뱨��MSB8031���������������ӵ�
	//http://www.microsoft.com/zh-cn/download/details.aspx?id=40770

	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CString CString1 = _T("CString");
	//std::string string1 = _T("string");
	//TCHAR * char1 = _T("char1");

	////һ��CString �ִ�ת string ,char*
	//string1 = CString1;
	//char1 = CString1.GetBuffer();
	//CString1.ReleaseBuffer();//�ͷŵ��ִ�������

	////����string תCString char*
	//string1 = _T("string1");
	//CString1 = string1.data();
	////char1=string1.data();
	//new TCHAR[string1.length() + 1];
	//strcpy(char1, string1.data());
	////����char* תCString ,string
	//char1 = _T("char1");
	//CString1 = char1;
	//string1 = char1;

	//TCHAR _T
}
