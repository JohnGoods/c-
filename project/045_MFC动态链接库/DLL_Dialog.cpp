// DLL_Dialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "045_MFC��̬���ӿ�.h"
#include "DLL_Dialog.h"
#include "afxdialogex.h"


// CDLL_Dialog �Ի���

IMPLEMENT_DYNAMIC(CDLL_Dialog, CDialogEx)

CDLL_Dialog::CDLL_Dialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDLL_Dialog::IDD, pParent)
{

}

CDLL_Dialog::~CDLL_Dialog()
{
}

void CDLL_Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDLL_Dialog, CDialogEx)
END_MESSAGE_MAP()

CDLL_Dialog g_dlg;
// CDLL_Dialog ��Ϣ�������
void showdlg1(void){
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CDLL_Dialog dlg;
	dlg.DoModal();
}

void showdlg2(void){
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CDLL_Dialog dlg;
	dlg.DoModal();
}

void showdlg3(void){
	CDLL_Dialog *pdlg = new CDLL_Dialog;
	pdlg->Create(IDD_DIALOG1);
	pdlg->ShowWindow(SW_SHOW);
	//delete pdlg;
}

void showdlg4(void){
	if (g_dlg.m_hWnd == 0){
		g_dlg.Create(IDD_DIALOG1);
	}
	g_dlg.ShowWindow(SW_SHOW);
}

void showdlg5(void){
	CDLL_Dialog dlg;
	dlg.Create(IDD_DIALOG1);
	dlg.ShowWindow(SW_SHOW);
	//һ������
}