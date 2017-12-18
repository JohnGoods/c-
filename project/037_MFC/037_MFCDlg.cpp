
// 037_MFCDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "037_MFC.h"
#include "037_MFCDlg.h"
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


// CMy037_MFCDlg 对话框



CMy037_MFCDlg::CMy037_MFCDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMy037_MFCDlg::IDD, pParent)
	, EDIT_CS(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy037_MFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, EDIT);
	DDX_Text(pDX, IDC_EDIT1, EDIT_CS);
}

BEGIN_MESSAGE_MAP(CMy037_MFCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
ON_BN_CLICKED(IDC_BUTTON_7, &CMy037_MFCDlg::OnBnClickedButton7)
ON_BN_CLICKED(IDC_BUTTON_8, &CMy037_MFCDlg::OnBnClickedButton8)
ON_BN_CLICKED(IDC_BUTTON_9, &CMy037_MFCDlg::OnBnClickedButton9)
ON_BN_CLICKED(IDC_BUTTON_4, &CMy037_MFCDlg::OnBnClickedButton4)
ON_BN_CLICKED(IDC_BUTTON_BS, &CMy037_MFCDlg::OnBnClickedButtonBs)
ON_BN_CLICKED(IDC_BUTTON_CE, &CMy037_MFCDlg::OnBnClickedButtonCe)
ON_BN_CLICKED(IDC_BUTTON_C, &CMy037_MFCDlg::OnBnClickedButtonC)
ON_BN_CLICKED(IDC_BUTTON_ZF, &CMy037_MFCDlg::OnBnClickedButtonZf)
ON_EN_CHANGE(IDC_EDIT1, &CMy037_MFCDlg::OnEnChangeEdit1)
ON_BN_CLICKED(IDC_BUTTON_5, &CMy037_MFCDlg::OnBnClickedButton5)
ON_BN_CLICKED(IDC_BUTTON_6, &CMy037_MFCDlg::OnBnClickedButton6)
ON_BN_CLICKED(IDC_BUTTON_1, &CMy037_MFCDlg::OnBnClickedButton1)
ON_BN_CLICKED(IDC_BUTTON_2, &CMy037_MFCDlg::OnBnClickedButton2)
ON_BN_CLICKED(IDC_BUTTON_3, &CMy037_MFCDlg::OnBnClickedButton3)
ON_BN_CLICKED(IDC_BUTTON_0, &CMy037_MFCDlg::OnBnClickedButton0)
ON_BN_CLICKED(IDC_BUTTON_DIAN, &CMy037_MFCDlg::OnBnClickedButtonDian)
ON_BN_CLICKED(IDC_BUTTON_CHU, &CMy037_MFCDlg::OnBnClickedButtonChu)
ON_BN_CLICKED(IDC_BUTTON_CHENG, &CMy037_MFCDlg::OnBnClickedButtonCheng)
ON_BN_CLICKED(IDC_BUTTON_JIAN, &CMy037_MFCDlg::OnBnClickedButtonJian)
ON_BN_CLICKED(IDC_BUTTON_JIA, &CMy037_MFCDlg::OnBnClickedButtonJia)
ON_BN_CLICKED(IDC_BUTTON_DENG, &CMy037_MFCDlg::OnBnClickedButtonDeng)
END_MESSAGE_MAP()


// CMy037_MFCDlg 消息处理程序

BOOL CMy037_MFCDlg::OnInitDialog()
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
	/*HWND h = ::GetDlgItem(m_hWnd, IDC_EDIT1);
	::SetWindowText(h, L"0.");*/
	EDIT.SetWindowText(L"");

	//this->GetDlgItem(IDC_EDIT1)->SetWindowText(L"0.");

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMy037_MFCDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMy037_MFCDlg::OnPaint()
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
HCURSOR CMy037_MFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMy037_MFCDlg::OnBnClickedButton7()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	EDIT_CS += L"7";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton8()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	EDIT_CS += L"8";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButtonBs()
{
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS.GetBuffer()[EDIT_CS.GetLength() - 1] = 0;
	EDIT_CS.ReleaseBuffer();
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButtonCe()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	EDIT_CS = _T("");
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButtonC()
{
	// TODO:  在此添加控件通知处理程序代码
	OnBnClickedButtonCe();
}


void CMy037_MFCDlg::OnBnClickedButtonZf()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	const TCHAR* ps = EDIT_CS.GetBuffer();
	if (ps[0] == '-'){
		ps++;
		EDIT_CS = ps;
	}
	else{
		CString s;
		s = _T("-");
		s += EDIT_CS;
		EDIT_CS = s;
	}
	EDIT_CS.ReleaseBuffer();
	UpdateData(false);
}


void CMy037_MFCDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
}


void CMy037_MFCDlg::OnBnClickedButton9()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"9";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton4()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"4";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton5()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"5";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton6()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"6";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"1";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton2()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"2";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton3()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"3";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButton0()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	EDIT_CS += L"0";
	UpdateData(false);
}


void CMy037_MFCDlg::OnBnClickedButtonDian()
{
	UpdateData(TRUE);
	// TODO:  在此添加控件通知处理程序代码
	if (-1 == EDIT_CS.Find(L'.'))
	{
		EDIT_CS += L".";
	}
	UpdateData(false);
}

//除
void CMy037_MFCDlg::OnBnClickedButtonChu()
{
	// TODO:  在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHU;
}


void CMy037_MFCDlg::OnBnClickedButtonCheng()
{
	// TODO:  在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_CHENG;
}


void CMy037_MFCDlg::OnBnClickedButtonJian()
{
	// TODO:  在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIAN;
}


void CMy037_MFCDlg::OnBnClickedButtonJia()
{
	// TODO:  在此添加控件通知处理程序代码
	SaveFirstValue();
	mFlag = FLAG_JIA;
}


void CMy037_MFCDlg::OnBnClickedButtonDeng()
{
	// TODO:  在此添加控件通知处理程序代码
	Calculator();
}

//保存第一个输入值
void CMy037_MFCDlg::SaveFirstValue()
{
	UpdateData(TRUE);
	mNum1 = _wtof(EDIT_CS);
	EDIT_CS = L"";
	UpdateData(FALSE);
}

//计算结果
void CMy037_MFCDlg::Calculator()
{
	UpdateData(TRUE);
	mNum2 = _wtof(EDIT_CS);
	double result = 0.0f;
	switch (mFlag)
	{
	case FLAG_JIA:						//加  
		result = mNum1 + mNum2;
		break;
	case FLAG_JIAN:						//减 
		result = mNum1 - mNum2;
		break;
	case FLAG_CHENG:					//乘  
		result = mNum1 * mNum2;
		break;
	case FLAG_CHU:						//除  
		if (mNum2 == 0.0f)
		{
			result = mNum1;
		}
		else
		{
			result = mNum1 / mNum2;
		}
		break;
	case FLAG_PINGFANG:					//平方 
		result = mNum2 * mNum2;
		break;
	case FLAG_KAIFANG:					//开方  
		result = sqrt(mNum2);
		break;
	default:
		break;
	}
	//如果浮点数其实是个整数,就显示为整数
	if (result - int(result) <= 1e-5)
	{
		EDIT_CS.Format(L"%d", (int)result);
	}
	else
	{
		EDIT_CS.Format(L"%f", result);
	}
	UpdateData(FALSE);

	mNum1 = result;
	mNum2 = 0.0f;
}