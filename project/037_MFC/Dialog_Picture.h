#pragma once


// CDialog_Picture �Ի���
//���BMP��Ҫ�������� CONTROL         IDB_BITMAP1, IDC_STATIC, "Static", SS_BITMAP, 54, 9, 28, 31, NOT WS_GROUP

class CDialog_Picture : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Picture)

public:
	CDialog_Picture(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_Picture();

// �Ի�������
	enum { IDD = IDD_DIALOG_PICT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
