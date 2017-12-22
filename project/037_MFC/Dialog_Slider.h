#pragma once
#include "afxcmn.h"


// CDialog_Slider 对话框

class CDialog_Slider : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Slider)

public:
	CDialog_Slider(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialog_Slider();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int OnInitDialog();
	int m_slider1;
	CSliderCtrl m_slider2;
};
