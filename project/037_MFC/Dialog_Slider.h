#pragma once
#include "afxcmn.h"


// CDialog_Slider �Ի���

class CDialog_Slider : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Slider)

public:
	CDialog_Slider(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_Slider();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int OnInitDialog();
	int m_slider1;
	CSliderCtrl m_slider2;
};
