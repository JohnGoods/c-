#pragma once


// CDialog_Timer_ �Ի���

class CDialog_Timer_ : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Timer_)

public:
	CDialog_Timer_(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialog_Timer_();

// �Ի�������
	enum { IDD = IDD_DIALOG_TIMER };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	CString m_sTime;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
