#pragma once


// CMY_Dialog �Ի���

class CMY_Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMY_Dialog)

public:
	CMY_Dialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMY_Dialog();

// �Ի�������
	enum { IDD = IDD_DIALOG_MINE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedButtonPrint();
	BOOL m_radio_index1;
};
