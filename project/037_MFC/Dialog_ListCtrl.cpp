// Dialog_ListCtrl.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_ListCtrl.h"
#include "afxdialogex.h"


// CDialog_ListCtrl �Ի���

IMPLEMENT_DYNAMIC(CDialog_ListCtrl, CDialogEx)

CDialog_ListCtrl::CDialog_ListCtrl(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_ListCtrl::IDD, pParent)
{

}

CDialog_ListCtrl::~CDialog_ListCtrl()
{
}

void CDialog_ListCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_ListCtrl, CDialogEx)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST1, &CDialog_ListCtrl::OnLvnItemchangedList1)
END_MESSAGE_MAP()


// CDialog_ListCtrl ��Ϣ�������


void CDialog_ListCtrl::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}


int CDialog_ListCtrl::OnInitDialog()
{
	//�����Ŀ
	CListCtrl* plst_ctl = (CListCtrl*)GetDlgItem(IDC_LIST1);
	plst_ctl->InsertItem(0, L"0000");
	plst_ctl->InsertItem(1, L"1111");
	plst_ctl->InsertItem(2, L"2222");
	plst_ctl->InsertItem(3, L"aaaaa");
	plst_ctl->SetItemText(3, 0, L"33333");
	return 0;
	return 0;
}
