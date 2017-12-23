// Dialog_ListCtrl.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_ListCtrl.h"
#include "afxdialogex.h"


// CDialog_ListCtrl �Ի���

IMPLEMENT_DYNAMIC(CDialog_ListCtrl, CDialogEx)

CDialog_ListCtrl::CDialog_ListCtrl(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_ListCtrl::IDD, pParent)
	, FileDir(_T(""))
{

}

CDialog_ListCtrl::~CDialog_ListCtrl()
{
}

void CDialog_ListCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_ListCtrl, CDialogEx)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST1, &CDialog_ListCtrl::OnLvnItemchangedList1)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, &CDialog_ListCtrl::OnNMClickList1)
END_MESSAGE_MAP()


// CDialog_ListCtrl ��Ϣ�������


void CDialog_ListCtrl::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}


int CDialog_ListCtrl::OnInitDialog()
{
	//�����Ŀ
	//�����Ŀ
	//�����Ŀ
	CListCtrl* plst_ctl = (CListCtrl*)GetDlgItem(IDC_LIST1);
	//���ͼ��
	m_imagelist_b.Create(32, 32, ILC_COLOR32 | ILC_MASK, 0, 0);
	m_imagelist_s.Create(16, 16, ILC_COLOR32 | ILC_MASK, 0, 0);
	plst_ctl->SetImageList(&m_imagelist_b, LVSIL_NORMAL);//��ͼ��
	plst_ctl->SetImageList(&m_imagelist_s, LVSIL_SMALL);

	/*plst_ctl->InsertItem(0,L"0000",0);
	plst_ctl->InsertItem(1,L"1111",0);
	plst_ctl->InsertItem(2,L"2222");
	plst_ctl->InsertItem(3,L"aaaaa");
	plst_ctl->SetItemText(3,0,L"33333");*/
	CFileFind findfile;
	int nfound = findfile.FindFile(L"C:\\Windows\\//*.*");
	int i = 0;
	while (nfound)
	{
		nfound = findfile.FindNextFile();
		if (findfile.IsDirectory())
		{
			continue;
		}
		SHFILEINFO finfo;
		//��ȡ�ļ���Ϣ����Ҫͼ��icon
		SHGetFileInfo(findfile.GetFilePath(), 0, &finfo, sizeof(finfo), SHGFI_ICON);
		//����ļ���Ŀ��ͼ��
		m_imagelist_s.Add(finfo.hIcon);//��ImageList�����ͼ����Դ
		plst_ctl->InsertItem(i++, findfile.GetFileName(), m_imagelist_b.Add(finfo.hIcon));
	}
	FileDir = findfile.GetRoot();//��ȡ�ļ�Ŀ¼·��
	findfile.Close();//�ͷ���Դ
	return 0;
}


void CDialog_ListCtrl::OnNMClickList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = (LPNMITEMACTIVATE)(pNMHDR);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//��ȡ�ļ�Ŀ¼·�����ļ�
	CListCtrl* plst_ctl = (CListCtrl*)GetDlgItem(IDC_LIST1);
	//��ȡListCtrlѡ�����λ��
	POSITION pos = plst_ctl->GetFirstSelectedItemPosition();
	if (pos)
	{
		int item_index = plst_ctl->GetNextSelectedItem(pos);
		//��ȡѡ��ͼ����ļ���
		CString filename = plst_ctl->GetItemText(item_index, 0);
		filename = FileDir + filename;
		TRACE("%ws \n", filename);
		ShellExecuteW(0, NULL, filename, NULL, NULL, SW_SHOWNORMAL);
	}

	*pResult = 0;
}
