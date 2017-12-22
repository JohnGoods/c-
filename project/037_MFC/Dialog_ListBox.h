#pragma once


// CDialog_ListBox 对话框

class CDialog_ListBox : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_ListBox)

public:
	CDialog_ListBox(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialog_ListBox();

// 对话框数据
	enum { IDD = IDD_DIALOG_LISTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	int OnInitDialog();
	afx_msg void OnBnClickedButton2();
};
