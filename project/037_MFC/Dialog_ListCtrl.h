#pragma once
#include "afxwin.h"


// CDialog_ListCtrl 对话框

class CDialog_ListCtrl : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_ListCtrl)

public:
	CDialog_ListCtrl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialog_ListCtrl();

// 对话框数据
	enum { IDD = IDD_DIALOG_LIST_CTRL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	int OnInitDialog();
	CImageList m_imagelist_b;
};
