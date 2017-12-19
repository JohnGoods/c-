
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
	//运算符 宏定义
	enum OperatorNum{ONull=0,OAdd=1,OSub=2,OMul=3,ODiv=4};

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
	CEdit EDIT;
	CString EDIT_CS;
	afx_msg void OnBnClickedButtonBs();
	afx_msg void OnBnClickedButtonCe();
	afx_msg void OnBnClickedButtonC();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButtonZf();
	afx_msg void OnBnClickedButtonDian();
	afx_msg void OnBnClickedButtonChu();
	afx_msg void OnBnClickedButtonCheng();
	afx_msg void OnBnClickedButtonJian();
	afx_msg void OnBnClickedButtonJia();
	afx_msg void OnBnClickedButtonDeng();
	afx_msg void OnBnClickedButtonMc();
	afx_msg void OnBnClickedButtonMr();
	afx_msg void OnBnClickedButtonMs();
	afx_msg void OnBnClickedButtonmjia();
	afx_msg void OnBnClickedButtonSqrt();
	afx_msg void OnBnClickedButtonBaifen();
	afx_msg void OnBnClickedButtonOneX();
	// 累计数值,存放计算结果
	int m_nPlanNum;
	// 用于获取编辑框的值
	int m_nowNum;
	// 用于计算四则运算
	int plan(OperatorNum nOperator);
	// 存放上次按下的运算符值
	OperatorNum m_nPreOperator = ONull;
	// 判断最后一次按下的是否运算符 是=1 否=0
	bool LastPressIsOperater;
	// 表示按下了0-9
	int PressNum(int nNum);
};


