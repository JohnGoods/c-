// MY_Dialog.cpp : 实现文件
//

#include "stdafx.h"
#include "037_MFC.h"
#include "MY_Dialog.h"
#include "afxdialogex.h"


// CMY_Dialog 对话框

IMPLEMENT_DYNAMIC(CMY_Dialog, CDialogEx)

CMY_Dialog::CMY_Dialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMY_Dialog::IDD, pParent)
{

}

CMY_Dialog::~CMY_Dialog()
{
}

void CMY_Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMY_Dialog, CDialogEx)
END_MESSAGE_MAP()


// CMY_Dialog 消息处理程序
