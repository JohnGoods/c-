// Dialog_ComboBox.cpp : 实现文件
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_ComboBox.h"
#include "afxdialogex.h"


// CDialog_ComboBox 对话框

IMPLEMENT_DYNAMIC(CDialog_ComboBox, CDialogEx)

CDialog_ComboBox::CDialog_ComboBox(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_ComboBox::IDD, pParent)
{

}

CDialog_ComboBox::~CDialog_ComboBox()
{
}

void CDialog_ComboBox::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_ComboBox, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_ADD_DATA, &CDialog_ComboBox::OnBnClickedButtonAddData)
	ON_BN_CLICKED(IDOK, &CDialog_ComboBox::OnBnClickedOk)
END_MESSAGE_MAP()


// CDialog_ComboBox 消息处理程序


void CDialog_ComboBox::OnBnClickedButtonAddData()
{
	//输入数据保存
	/*TCHAR ws[256];
	((CComboBox*)GetDlgItem(IDC_COMBO1))->GetWindowText(ws, 256);
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString(ws);*/
	//获取行号
	CComboBox* pcombo = (CComboBox*)GetDlgItem(IDC_COMBO1);
	int pos = pcombo->GetCurSel();
	switch (pos)
	{
	default:
		TRACE("\n --------- pos  %d \n", pos);//printf
		break;
	}

	//数据
	TCHAR w[256];
	pcombo->GetLBText(pos, w);
	TRACE("--------------->%S\n", w);

	pcombo->SetCurSel(2);	//设置第几行
}


void CDialog_ComboBox::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
