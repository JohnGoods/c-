// Cdialog_Main_Tab.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Cdialog_Main_Tab.h"
#include "afxdialogex.h"


// Cdialog_Main_Tab �Ի���

IMPLEMENT_DYNAMIC(Cdialog_Main_Tab, CDialogEx)

Cdialog_Main_Tab::Cdialog_Main_Tab(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cdialog_Main_Tab::IDD, pParent)
{

}

Cdialog_Main_Tab::~Cdialog_Main_Tab()
{
}

void Cdialog_Main_Tab::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cdialog_Main_Tab, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &Cdialog_Main_Tab::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// Cdialog_Main_Tab ��Ϣ�������


int Cdialog_Main_Tab::OnInitDialog()
{
	//��ȡѡ�����ָ��
	CTabCtrl *ptab = (CTabCtrl*)GetDlgItem(IDC_TAB1);
	ptab->InsertItem(1, L"111111");
	ptab->InsertItem(2, L"222222");
	ptab->InsertItem(3, L"333333");
	ptab->InsertItem(4, L"444444");
	ptab->InsertItem(8, L"aaaaaaaa");
	return 0;
}


void Cdialog_Main_Tab::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTabCtrl *ptab = (CTabCtrl*)GetDlgItem(IDC_TAB1);
	int cursel = ptab->GetCurSel();
	switch (cursel)
	{
	case 0:
		//��ʾ���Դ���
		TRACE("\n sel=%d", cursel);
		break;
	case 1:
		TRACE("\n sel=%d", cursel);
		break;
	case 2:
		TRACE("\n sel=%d", cursel);
		break;
	case 3:
		TRACE("\n sel=%d", cursel);
		break;
	case 4:
		TRACE("\n sel=%d", cursel);
		break;
	default:
		break;
	}
	*pResult = 0;
}
