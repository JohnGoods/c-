#pragma once
#include "afxcmn.h"


// CDialog_TreeCtrl �Ի���

class CDialog_TreeCtrl : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_TreeCtrl)

public:
	CDialog_TreeCtrl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_TreeCtrl();

// �Ի�������
	enum { IDD = IDD_DIALOG_TREECTRL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CAnimateCtrl m_animate;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
};
