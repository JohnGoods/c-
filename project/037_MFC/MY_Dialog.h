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
};
