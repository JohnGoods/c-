#pragma once


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
};
