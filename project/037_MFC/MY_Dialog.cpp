// MY_Dialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "MY_Dialog.h"
#include "afxdialogex.h"


// CMY_Dialog �Ի���

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


// CMY_Dialog ��Ϣ�������


void CMY_Dialog::OnBnClickedRadio1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedRadio6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
}


void CMY_Dialog::OnBnClickedButtonPrint()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	switch (m_radio_index1)
	{
	case 0:
		TRACE("\n --------- ����  %d \n", m_radio_index1 + 1);//printf
		break;
	case 1:
		TRACE("\n --------- ����  %d \n", m_radio_index1 + 1);//printf
		break;
	case 2:
		TRACE("\n --------- ����  %d \n", m_radio_index1 + 1);//printf
		break;
	default:
		TRACE("\n --------- ����  %d \n", m_radio_index1 + 1);//printf
		break;
	}
}
