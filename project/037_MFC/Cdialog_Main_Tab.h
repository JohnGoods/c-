#pragma once


// Cdialog_Main_Tab �Ի���

class Cdialog_Main_Tab : public CDialogEx
{
	DECLARE_DYNAMIC(Cdialog_Main_Tab)

public:
	Cdialog_Main_Tab(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cdialog_Main_Tab();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int OnInitDialog();
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};
