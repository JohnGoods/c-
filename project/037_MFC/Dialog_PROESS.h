#pragma once


// CDialog_PROESS �Ի���

class CDialog_PROESS : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_PROESS)

public:
	CDialog_PROESS(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_PROESS();

// �Ի�������
	enum { IDD = IDD_DIALOG_PROCESS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
};
