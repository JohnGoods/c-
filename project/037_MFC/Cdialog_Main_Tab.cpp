// Cdialog_Main_Tab.cpp : 实现文件
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Cdialog_Main_Tab.h"
#include "afxdialogex.h"
#include "Dialog_ComboBox.h"
#include "Dialog_ListBox.h"
#include "Dialog_Slider.h"
#include "Dialog_ListCtrl.h"


// Cdialog_Main_Tab 对话框

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


// Cdialog_Main_Tab 消息处理程序


int Cdialog_Main_Tab::OnInitDialog()
{
	//获取选项卡对象指针
	CTabCtrl *ptab = (CTabCtrl*)GetDlgItem(IDC_TAB1);
	ptab->InsertItem(1, L"组合框");
	ptab->InsertItem(2, L"列表框");
	ptab->InsertItem(3, L"滑块控件");
	ptab->InsertItem(4, L"列表视图");
	//创建页面窗口
	dlg_combobox.Create(IDD_DIALOG_COMBOBOX);
	dlg_listbox.Create(IDD_DIALOG_LISTBOX);
	dlg_slider.Create(IDD_DIALOG_SLIDER);
	dlg_list_ctrl.Create(IDD_DIALOG_LIST_CTRL);
	//设页属窗口 父窗口
	dlg_combobox.SetParent(ptab);
	dlg_listbox.SetParent(ptab);
	dlg_slider.SetParent(ptab);
	dlg_list_ctrl.SetParent(ptab);

	//设置子窗口位置
	RECT r1, r2, r3;
	ptab->GetWindowRect(&r2);
	ptab->GetItemRect(0, &r3);
	r1.left = 5;
	r1.top = r3.bottom + 5;
	r1.right = r2.right - r2.left - 10;
	r1.bottom = r2.bottom - r2.top - r1.top;
	dlg_combobox.MoveWindow(&r1);
	dlg_listbox.MoveWindow(&r1);
	dlg_slider.MoveWindow(&r1);
	dlg_list_ctrl.MoveWindow(&r1);
	return 0;
}


void Cdialog_Main_Tab::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 在此添加控件通知处理程序代码
	CTabCtrl *ptab = (CTabCtrl*)GetDlgItem(IDC_TAB1);
	int cursel = ptab->GetCurSel();
	dlg_listbox.ShowWindow(cursel==0);
	dlg_combobox.ShowWindow(cursel==1);
	dlg_slider.ShowWindow(cursel==2);
	dlg_list_ctrl.ShowWindow(cursel == 3);
	//switch (cursel)
	//{
	//case 0:
	//	//显示属性窗口
	//	TRACE("\n sel=%d", cursel);
	//	dlg_listbox.ShowWindow(SW_HIDE);
	//	dlg_combobox.ShowWindow(SW_SHOW);
	//	break;
	//case 1:
	//	TRACE("\n sel=%d", cursel);
	//	dlg_combobox.ShowWindow(SW_HIDE);
	//	dlg_listbox.ShowWindow(SW_SHOW);
	//	break;
	//case 2:
	//	TRACE("\n sel=%d", cursel);
	//	dlg_slider.ShowWindow(SW_SHOW);
	//	break;
	//case 3:
	//	TRACE("\n sel=%d", cursel);
	//	break;
	//case 4:
	//	TRACE("\n sel=%d", cursel);
	//	break;
	//default:
	//	break;
	//}
	*pResult = 0;
}