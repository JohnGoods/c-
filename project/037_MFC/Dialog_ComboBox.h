#pragma once


// CDialog_ComboBox �Ի���

class CDialog_ComboBox : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_ComboBox)

public:
	CDialog_ComboBox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_ComboBox();

// �Ի�������
	enum { IDD = IDD_DIALOG_COMBOBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonAddData();
	afx_msg void OnBnClickedOk();
};
