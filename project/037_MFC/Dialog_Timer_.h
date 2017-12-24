#pragma once


// CDialog_Timer_ 对话框

class CDialog_Timer_ : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Timer_)

public:
	CDialog_Timer_(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialog_Timer_();

// 对话框数据
	enum { IDD = IDD_DIALOG_TIMER };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	CString m_sTime;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	void CALLBACK EXPORT CDialog_Timer_::TimerProc2(
		HWND hWnd,      // handle of CWnd that called SetTimer
		UINT nMsg,      // WM_TIMER
		UINT nIDEvent,   // timer identification
		DWORD dwTime    // system time
		);
	
	afx_msg void OnBnClickedButton5();
	virtual BOOL OnInitDialog();
};
