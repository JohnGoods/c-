
// 038_字符串转Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "038_字符串转.h"
#include "038_字符串转Dlg.h"
#include <string>
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CMy038_字符串转Dlg 对话框



CMy038_字符串转Dlg::CMy038_字符串转Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMy038_字符串转Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy038_字符串转Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMy038_字符串转Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMy038_字符串转Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMy038_字符串转Dlg 消息处理程序

BOOL CMy038_字符串转Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMy038_字符串转Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMy038_字符串转Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMy038_字符串转Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMy038_字符串转Dlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	//// TODO: 在此添加控件通知处理程序代码
	//CString CString1="CString";
	//std::string string1="string";
	//CHAR * char1="char1";

	////一、CString 字串转 string ,char*
	//string1=CString1;
	//char1=CString1.GetBuffer();
	//CString1.ReleaseBuffer();//释放掉字串缓冲区

	////二、string 转CString char*
	//string1="string1";
	//CString1=string1.data();
	////char1=string1.data();
	//new char[string1.length()+1];
	//strcpy(char1,string1.data());
	////三、char* 转CString ,string
	//char1="char1";
	//CString1=char1;
	//string1=char1;

	//// TODO: 在此添加控件通知处理程序代码
	//CString CString1=L"CString";
	//std::wstring string1=L"string";
	//WCHAR * char1=L"char1";

	////一、CString 字串转 string ,char*
	//string1=CString1;
	//char1=CString1.GetBuffer();
	//CString1.ReleaseBuffer();//释放掉字串缓冲区

	////二、string 转CString char*
	//string1=L"string1";
	//CString1=string1.data();
	////char1=string1.data();
	//new WCHAR[string1.length()+1];
	//wcscpy(char1,string1.data());
	////三、char* 转CString ,string
	//char1=L"char1";
	//CString1=char1;
	//string1=char1;

	//VS2013编译报错MSB8031就请下载下面链接的
	//http://www.microsoft.com/zh-cn/download/details.aspx?id=40770

	// TODO: 在此添加控件通知处理程序代码
	//CString CString1 = _T("CString");
	//std::string string1 = _T("string");
	//TCHAR * char1 = _T("char1");

	////一、CString 字串转 string ,char*
	//string1 = CString1;
	//char1 = CString1.GetBuffer();
	//CString1.ReleaseBuffer();//释放掉字串缓冲区

	////二、string 转CString char*
	//string1 = _T("string1");
	//CString1 = string1.data();
	////char1=string1.data();
	//new TCHAR[string1.length() + 1];
	//strcpy(char1, string1.data());
	////三、char* 转CString ,string
	//char1 = _T("char1");
	//CString1 = char1;
	//string1 = char1;

	//TCHAR _T
}
