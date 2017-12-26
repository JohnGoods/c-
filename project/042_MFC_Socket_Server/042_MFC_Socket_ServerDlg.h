
// 042_MFC_Socket_ServerDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMy042_MFC_Socket_ServerDlg 对话框
class CMy042_MFC_Socket_ServerDlg : public CDialogEx
{
// 构造
public:
	CMy042_MFC_Socket_ServerDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY042_MFC_SOCKET_SERVER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_editIp;
	CString m_strIp;
	CEdit m_editPort;
	UINT m_nPort;
	CString m_strMsg;
	CEdit m_editMsg;
	CListBox m_listSent;
	CListBox m_listRecv;
	CButton m_btnListen;
	CButton m_btnSend;
	CButton m_btnClose;
};
