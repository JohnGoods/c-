
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
//	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
	CEdit EDIT;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton7();
	CString EDIT_CS;
	afx_msg void OnBnClickedButton8();
};
