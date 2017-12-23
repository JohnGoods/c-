#pragma once


// Cdialog_Main_Tab 对话框

class Cdialog_Main_Tab : public CDialogEx
{
	DECLARE_DYNAMIC(Cdialog_Main_Tab)

public:
	Cdialog_Main_Tab(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Cdialog_Main_Tab();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int OnInitDialog();
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
