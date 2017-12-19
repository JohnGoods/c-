
// 037_MFCDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"

// CMy037_MFCDlg �Ի���
class CMy037_MFCDlg : public CDialogEx
{
// ����
public:
	CMy037_MFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY037_MFC_DIALOG };
	//����� �궨��
	enum OperatorNum{ONull=0,OAdd=1,OSub=2,OMul=3,ODiv=4};

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
	// �ۼ���ֵ,��ż�����
	int m_nPlanNum;
	// ���ڻ�ȡ�༭���ֵ
	int m_nowNum;
	// ���ڼ�����������
	int plan(OperatorNum nOperator);
	// ����ϴΰ��µ������ֵ
	OperatorNum m_nPreOperator = ONull;
	// �ж����һ�ΰ��µ��Ƿ������ ��=1 ��=0
	bool LastPressIsOperater;
	// ��ʾ������0-9
	int PressNum(int nNum);
};


