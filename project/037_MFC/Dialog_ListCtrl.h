#pragma once
#include "afxwin.h"


// CDialog_ListCtrl �Ի���

class CDialog_ListCtrl : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_ListCtrl)

public:
	CDialog_ListCtrl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_ListCtrl();

// �Ի�������
	enum { IDD = IDD_DIALOG_LIST_CTRL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	int OnInitDialog();
	CImageList m_imagelist_b;
};
