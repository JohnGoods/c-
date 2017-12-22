#pragma once


// CMY_Dialog 对话框

class CMY_Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMY_Dialog)

public:
	CMY_Dialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMY_Dialog();

// 对话框数据
	enum { IDD = IDD_DIALOG_MINE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
