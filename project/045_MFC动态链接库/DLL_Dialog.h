#pragma once


// CDLL_Dialog �Ի���

class CDLL_Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(CDLL_Dialog)

public:
	CDLL_Dialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDLL_Dialog();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
