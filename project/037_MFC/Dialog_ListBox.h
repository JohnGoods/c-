#pragma once


// CDialog_ListBox �Ի���

class CDialog_ListBox : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_ListBox)

public:
	CDialog_ListBox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_ListBox();

// �Ի�������
	enum { IDD = IDD_DIALOG_LISTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	int OnInitDialog();
	afx_msg void OnBnClickedButton2();
};
