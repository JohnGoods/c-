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
	, m_radio_index1(FALSE)
{

}

CMY_Dialog::~CMY_Dialog()
{
}

void CMY_Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Radio(pDX, IDC_RADIO1, m_radio_index1);
}


BEGIN_MESSAGE_MAP(CMY_Dialog, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO1, &CMY_Dialog::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CMY_Dialog::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CMY_Dialog::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO4, &CMY_Dialog::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO5, &CMY_Dialog::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CMY_Dialog::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_BUTTON_Print, &CMY_Dialog::OnBnClickedButtonPrint)
END_MESSAGE_MAP()


// CMY_Dialog 消息处理程序


void CMY_Dialog::OnBnClickedRadio1()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio2()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio3()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio4()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio5()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio6()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedButtonPrint()
{
	// TODO:  在此添加控件通知处理程序代码
	switch (m_radio_index1)
	{
	case 0:
		TRACE("\n --------- 功能  %d \n", m_radio_index1 + 1);//printf
		break;
	case 1:
		TRACE("\n --------- 功能  %d \n", m_radio_index1 + 1);//printf
		break;
	case 2:
		TRACE("\n --------- 功能  %d \n", m_radio_index1 + 1);//printf
		break;
	default:
		TRACE("\n --------- 功能  %d \n", m_radio_index1 + 1);//printf
		break;
	}
}
