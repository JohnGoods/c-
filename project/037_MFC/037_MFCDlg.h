
// 037_MFCDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"

//�����
enum CALCULATOR_FLAG{
	FLAG_JIA = 0,
	FLAG_JIAN,
	FLAG_CHENG,
	FLAG_CHU,
	FLAG_PINGFANG,
	FLAG_KAIFANG,
};

// CMy037_MFCDlg �Ի���
class CMy037_MFCDlg : public CDialogEx
{
// ����
public:
	CMy037_MFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY037_MFC_DIALOG };

	void SaveFirstValue();		//�����һ������ֵ
	void Calculator();			//����

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedOk();
//	afx_msg void OnEnChangeEdit1();
	CEdit EDIT;
	//afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton7();
	CString EDIT_CS;
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButtonBs();
	afx_msg void OnBnClickedButtonCe();
	afx_msg void OnBnClickedButtonC();
	afx_msg void OnBnClickedButtonZf();
	afx_msg void OnEnChangeEdit1();
	//afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButtonDian();
	afx_msg void OnBnClickedButtonChu();
	afx_msg void OnBnClickedButtonCheng();
	afx_msg void OnBnClickedButtonJian();
	afx_msg void OnBnClickedButtonJia();
	afx_msg void OnBnClickedButtonDeng();

private:
	//�༭���ڵ��ַ���
	//CString EDIT_CS;
	//�����2��ֵ  
	double mNum1;
	double mNum2;
	//�������
	CALCULATOR_FLAG mFlag;
};


