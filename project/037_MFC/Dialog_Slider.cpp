// Dialog_Slider.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "037_MFC.h"
#include "Dialog_Slider.h"
#include "afxdialogex.h"


// CDialog_Slider �Ի���

IMPLEMENT_DYNAMIC(CDialog_Slider, CDialogEx)

CDialog_Slider::CDialog_Slider(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialog_Slider::IDD, pParent)
	, m_slider1(0)
{

}

CDialog_Slider::~CDialog_Slider()
{
}

void CDialog_Slider::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Slider(pDX, IDD_DIALOG_SLIDER, m_slider1);
	DDX_Control(pDX, IDD_DIALOG_SLIDER, m_slider2);
}


BEGIN_MESSAGE_MAP(CDialog_Slider, CDialogEx)
END_MESSAGE_MAP()


// CDialog_Slider ��Ϣ�������


int CDialog_Slider::OnInitDialog()
{
	//m_slider2 = ctrl
	CDialog::OnInitDialog();
	m_slider2.SetTicFreq(5);	//�̶���
	m_slider2.SetPos(20);	//���û���λ��
	m_slider2.SetRangeMin(-100);
	m_slider2.SetRangeMax(100);
	m_slider2.SetPos(0);
	m_slider2.SetLineSize(2);
	m_slider2.SetPageSize(10);
	return 0;
}
