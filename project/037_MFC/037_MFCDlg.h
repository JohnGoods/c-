
// 037_MFCDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMy037_MFCDlg 对话框
class CMy037_MFCDlg : public CDialogEx
{
// 构造
public:
	CMy037_MFCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY037_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
	CEdit EDIT;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton7();
	CString EDIT_CS;
	afx_msg void OnBnClickedButton8();
};
