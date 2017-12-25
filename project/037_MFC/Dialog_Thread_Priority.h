#pragma once


// CDialog_Thread_Priority 对话框

class CDialog_Thread_Priority : public CDialogEx
{
	DECLARE_DYNAMIC(CDialog_Thread_Priority)

public:
	CDialog_Thread_Priority(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialog_Thread_Priority();

// 对话框数据
	enum { IDD = IDD_DIALOG_PRIORITY };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	UINT m_edt_time1;
	UINT m_edt_time2;
	UINT m_edt_time3;
	UINT m_edt_time4;
	UINT m_edt_time5;
	UINT m_edt_time6;
	UINT m_edt_time7;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
};
