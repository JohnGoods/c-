#pragma once


// CDialog_Picture 对话框
//添加BMP需要设置如下 CONTROL         IDB_BITMAP1, IDC_STATIC, "Static", SS_BITMAP, 54, 9, 28, 31, NOT WS_GROUP

class CDialog_Picture : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Picture)

public:
	CDialog_Picture(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialog_Picture();

// 对话框数据
	enum { IDD = IDD_DIALOG_PICT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
