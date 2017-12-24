// Dialog_TreeCtrl.cpp : 实现文件
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_TreeCtrl.h"
#include "afxdialogex.h"


// CDialog_TreeCtrl 对话框

IMPLEMENT_DYNAMIC(CDialog_TreeCtrl, CDialogEx)

CDialog_TreeCtrl::CDialog_TreeCtrl(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_TreeCtrl::IDD, pParent)
{

}

CDialog_TreeCtrl::~CDialog_TreeCtrl()
{
}

void CDialog_TreeCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_TreeCtrl, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialog_TreeCtrl::OnBnClickedButton1)
END_MESSAGE_MAP()


// CDialog_TreeCtrl 消息处理程序


void CDialog_TreeCtrl::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	// TODO: 在此添加控件通知处理程序代码
	CTreeCtrl* ptree = (CTreeCtrl*)GetDlgItem(IDC_TREE1);
	HTREEITEM hitem = ptree->InsertItem(L"我的电脑");
	//插入子项
	ptree->InsertItem(L"AAAA", hitem, TVI_LAST);
	ptree->InsertItem(L"BBBB", hitem, TVI_LAST);
	HTREEITEM hsubitem = ptree->InsertItem(L"CCC", hitem, TVI_LAST);
	ptree->InsertItem(L"3333", hsubitem, TVI_SORT);
	ptree->InsertItem(L"1111", hsubitem, TVI_SORT);
	ptree->InsertItem(L"2222AAAA", hsubitem, TVI_SORT);
	ptree->InsertItem(L"2222", hsubitem, TVI_SORT);
	ptree->InsertItem(L"我的文档");
	ptree->InsertItem(L"网上邻居");
}
