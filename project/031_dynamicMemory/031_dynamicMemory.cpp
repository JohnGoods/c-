#include  <iostream>
using namespace std;

//new �� delete �����
//������ʹ�� new �������Ϊ������������Ͷ�̬�����ڴ��ͨ���﷨��
//new data - type;
//�����data - type �����ǰ����������ڵ��������õ��������ͣ�Ҳ�����ǰ������ṹ���ڵ��û��Զ�����κ��������͡�
//�����������������õ��������͡����磬���ǿ��Զ���һ��ָ�� double ���͵�ָ�룬Ȼ�������ڴ棬���ڴ���ִ��ʱ�����䡣���ǿ��԰�����������ʹ�� new ������������㣺
//double* pvalue = NULL; // ��ʼ��Ϊ null ��ָ��
//pvalue = new double;   // Ϊ���������ڴ�


class Box{
public:
	Box(){
		cout << "���ù��캯��" << endl;
	}
	~Box(){
		cout << "������������" << endl;
	}
};

int main(){
	Box* boxArray = new Box[4];
	// ���ͷ���aָ��ָ���ȫ���ڴ�ռ� ����ֻ������a[0]������������� ʣ�µĴ�boxArray[1]��boxArray[4]��4���û����з����m_cBuffer��Ӧ�ڴ�ռ佫�����ͷ� �Ӷ�����ڴ�й©
	delete boxArray;
	// ����ʹ�����������������ͷ��û��Լ������ڴ�ռ䲢��   �ͷ���boxArrayָ��ָ���ȫ���ڴ�ռ�
	delete[] boxArray;
	system("PAUSE");
	return 0;
}