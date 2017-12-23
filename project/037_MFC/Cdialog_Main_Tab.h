#pragma once
#include "NumEdit.h"	//基类
#include "MY_Dialog.h"
#include "Dialog_ComboBox.h"
#include "Dialog_ListBox.h"
#include "Dialog_Slider.h"
#include "Dialog_ListCtrl.h"

// Cdialog_Main_Tab 对话框

class Cdialog_Main_Tab : public CDialogEx
{
	DECLARE_DYNAMIC(Cdialog_Main_Tab)

public:
	Cdialog_Main_Tab(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Cdialog_Main_Tab();

// 对话框数据
	enum { IDD = IDD_DIALOG_TAB };
	CNumEdit EDIT;
	CString EDIT_CS;
	CMY_Dialog dlg;
	CDialog_ComboBox dlg_combobox;
	CDialog_ListBox dlg_listbox;
	CDialog_Slider dlg_slider;
	CDialog_ListCtrl dlg_list_ctrl;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int OnInitDialog();
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
