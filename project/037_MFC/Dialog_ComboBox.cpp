// Dialog_ComboBox.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_ComboBox.h"
#include "afxdialogex.h"


// CDialog_ComboBox �Ի���

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


// CDialog_ComboBox ��Ϣ�������


void CDialog_ComboBox::OnBnClickedButtonAddData()
{
	//�������ݱ���
	/*TCHAR ws[256];
	((CComboBox*)GetDlgItem(IDC_COMBO1))->GetWindowText(ws, 256);
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString(ws);*/
	//��ȡ�к�
	CComboBox* pcombo = (CComboBox*)GetDlgItem(IDC_COMBO1);
	int pos = pcombo->GetCurSel();
	switch (pos)
	{
	default:
		TRACE("\n --------- pos  %d \n", pos);//printf
		break;
	}

	//����
	TCHAR w[256];
	pcombo->GetLBText(pos, w);
	TRACE("--------------->%S\n", w);

	pcombo->SetCurSel(2);	//���õڼ���
}


void CDialog_ComboBox::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
