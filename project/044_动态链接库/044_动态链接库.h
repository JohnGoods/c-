// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� MY044__EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// MY044__API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef MY044__EXPORTS
#define MY044__API __declspec(dllexport)
#else
#define MY044__API __declspec(dllimport)
#endif

// �����Ǵ� 044_��̬���ӿ�.dll ������
class MY044__API CMy044_��̬���ӿ� {
public:
	CMy044_��̬���ӿ�(void);
	// TODO:  �ڴ�������ķ�����
};

extern MY044__API int nMy044_��̬���ӿ�;

MY044__API int fnMy044_��̬���ӿ�(void);

extern "C" MY044__API int ndllwin32;
extern "C" MY044__API int aaa;
MY044__API int fndllwin32(void);
extern "C" __declspec(dllexport) int add(int a, int b);

