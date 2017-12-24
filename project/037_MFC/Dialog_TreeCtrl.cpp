// Dialog_TreeCtrl.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_TreeCtrl.h"
#include "afxdialogex.h"


// CDialog_TreeCtrl �Ի���

IMPLEMENT_DYNAMIC(CDialog_TreeCtrl, CDialogEx)

CDialog_TreeCtrl::CDialog_TreeCtrl(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_TreeCtrl::IDD, pParent)
{

}

CDialog_TreeCtrl::~CDialog_TreeCtrl()
{
}

void CDialog_TreeCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_ANIMATE5, m_animate);
}


BEGIN_MESSAGE_MAP(CDialog_TreeCtrl, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialog_TreeCtrl::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialog_TreeCtrl::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CDialog_TreeCtrl::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CDialog_TreeCtrl::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CDialog_TreeCtrl::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CDialog_TreeCtrl::OnBnClickedButton6)
END_MESSAGE_MAP()


// CDialog_TreeCtrl ��Ϣ�������


void CDialog_TreeCtrl::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CTreeCtrl* ptree = (CTreeCtrl*)GetDlgItem(IDC_TREE1);
	HTREEITEM hitem = ptree->InsertItem(L"�ҵĵ���");
	//��������
	ptree->InsertItem(L"AAAA", hitem, TVI_LAST);
	ptree->InsertItem(L"BBBB", hitem, TVI_LAST);
	HTREEITEM hsubitem = ptree->InsertItem(L"CCC", hitem, TVI_LAST);
	ptree->InsertItem(L"3333", hsubitem, TVI_SORT);
	ptree->InsertItem(L"1111", hsubitem, TVI_SORT);
	ptree->InsertItem(L"2222AAAA", hsubitem, TVI_SORT);
	ptree->InsertItem(L"2222", hsubitem, TVI_SORT);
	ptree->InsertItem(L"�ҵ��ĵ�");
	ptree->InsertItem(L"�����ھ�");
}


void CDialog_TreeCtrl::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CFileDialog fileop(TRUE, NULL, NULL, 4 | 2, L"�����ļ�(*.avi)|*.avi|�����ļ�(*.*)|*.*||");
	if (fileop.DoModal() == IDOK)
	{
		m_animate.Open(fileop.GetPathName());
	}
}


void CDialog_TreeCtrl::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	m_animate.Play(0, -1, -1);
}


void CDialog_TreeCtrl::OnBnClickedButton4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	m_animate.Stop();
}


void CDialog_TreeCtrl::OnBnClickedButton5()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	static int seekNum = 0;
	m_animate.Seek(seekNum++);
}


void CDialog_TreeCtrl::OnBnClickedButton6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	m_animate.Close();
}
