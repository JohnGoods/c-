// 045_MFC��̬���ӿ�.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "045_MFC��̬���ӿ�.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ��  ����ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CMy045_MFC��̬���ӿ�App

BEGIN_MESSAGE_MAP(CMy045_MFC��̬���ӿ�App, CWinApp)
END_MESSAGE_MAP()


// CMy045_MFC��̬���ӿ�App ����

CMy045_MFC��̬���ӿ�App::CMy045_MFC��̬���ӿ�App()
{
	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CMy045_MFC��̬���ӿ�App ����

CMy045_MFC��̬���ӿ�App theApp;


// CMy045_MFC��̬���ӿ�App ��ʼ��

BOOL CMy045_MFC��̬���ӿ�App::InitInstance()
{
	CWinApp::InitInstance();
	//��ʼ������
	TRACE("InitInstance ����DLL����ʼ��\n");
	return TRUE;
}

int  CMy045_MFC��̬���ӿ�App::ExitInstance()
{
	//����������
	TRACE("ExitInstance ж��dll,����������\n ");
	return CWinApp::ExitInstance();
}

extern "C" __declspec(dllexport) int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}