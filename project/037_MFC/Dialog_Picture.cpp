// Dialog_Picture.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_Picture.h"
#include "afxdialogex.h"


// CDialog_Picture �Ի���

IMPLEMENT_DYNAMIC(CDialog_Picture, CDialogEx)

CDialog_Picture::CDialog_Picture(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_Picture::IDD, pParent)
{

}

CDialog_Picture::~CDialog_Picture()
{
}

void CDialog_Picture::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialog_Picture, CDialogEx)
END_MESSAGE_MAP()


// CDialog_Picture ��Ϣ�������
