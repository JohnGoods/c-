// Dialog_ListBox.cpp : 实现文件
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_ListBox.h"
#include "afxdialogex.h"


// CDialog_ListBox 对话框

IMPLEMENT_DYNAMIC(CDialog_ListBox, CDialogEx)

CDialog_ListBox::CDialog_ListBox(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_ListBox::IDD, pParent)
{

}

CDialog_ListBox::~CDialog_ListBox()
{
}

void CDialog_ListBox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_ListBox, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialog_ListBox::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialog_ListBox::OnBnClickedButton2)
END_MESSAGE_MAP()


// CDialog_ListBox 消息处理程序


void CDialog_ListBox::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	//先取得指针
	CListBox* plistBox = (CListBox*)GetDlgItem(IDC_LIST1);
	plistBox->AddString(L"1111");
}

int CDialog_ListBox::OnInitDialog()
{
	CDialog::OnInitDialog();
	CListBox*plistBox = (CListBox*)GetDlgItem(IDC_LIST1);
	plistBox->AddString(L"1111");
	plistBox->AddString(L"2222");
	plistBox->AddString(L"3333");
	return 0;
}

void CDialog_ListBox::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	CListBox*plistBox = (CListBox*)GetDlgItem(IDC_LIST1);
	plistBox->DeleteString(plistBox->GetCurSel());	//获取当前行并删除


	//获取当前选中行的数据
	//WCHAR ws[256];
	//plistBox->GetText(plistBox->GetCurSel(),ws)
}
