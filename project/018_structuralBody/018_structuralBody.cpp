#include <iostream>
using namespace std;
void printBook(struct Book book);

struct Book
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

#pragma warning(disable:4996)
int main(){
	Book book1;
	Book book2;

	// book1 ����
	strcpy(book1.title, "C++ �̳�");
	strcpy(book1.author, "Runoob");
	strcpy(book1.subject, "�������");
	book1.book_id = 123456;

	// book2 ����
	strcpy(book2.title, "CSS �̳�");
	strcpy(book2.author, "Runoob");
	strcpy(book2.subject, "ǰ�˼���");
	book2.book_id = 12346;

	// ��� Book1 ��Ϣ
	printBook(book1);

	// ��� Book2 ��Ϣ
	printBook(book2);

	system("PAUSE");
	return 0;
}

void printBook(struct Book book)
{
	cout << "����� : " << book.title << endl;
	cout << "������ : " << book.author << endl;
	cout << "����Ŀ : " << book.subject << endl;
	cout << "�� ID : " << book.book_id << endl;
}