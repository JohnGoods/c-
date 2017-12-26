
// 042_MFC_Socket_ServerDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMy042_MFC_Socket_ServerDlg �Ի���
class CMy042_MFC_Socket_ServerDlg : public CDialogEx
{
// ����
public:
	CMy042_MFC_Socket_ServerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY042_MFC_SOCKET_SERVER_DIALOG };

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
