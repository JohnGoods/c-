// 041_Socket_Client.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <WinSock2.h>
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	//1�����׽��ֿ�
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;

	wVersionRequested = MAKEWORD(2, 2);

	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0) {//��ʾ��ʼ�����ɹ�
		/* Tell the user that we could not find a usable */
		/* WinSock DLL.                                  */
		//return 0;
		printf("�����׽��ֿ���� \n");
	}
	//2����һ���׽��� ��ʹ��
	SOCKET ServerSocket;
	//3���������������������connect����
	SOCKADDR_IN socksin;
	socksin.sin_family = AF_INET;
	socksin.sin_port = htons(6688);
	socksin.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");//���ð󶨵�IP��ַ 192.168.1.111
	//printf("%04X \n",htonl(0x668899AA));
	while (1)
	{
		ServerSocket = socket(AF_INET, SOCK_STREAM, 0);
		int rf = connect(ServerSocket, (SOCKADDR*)&socksin, sizeof(socksin));
		if (rf == SOCKET_ERROR)
		{
			printf("δ�ɹ����ӵ�������\n");
		}
		else
		{
			printf("�ɹ����ӵ�������\n");
			char *ps = "�ͻ����������� yjxsoft.com\n";
			char s[256];
			gets(s);
			ps = s;
			send(ServerSocket, ps, strlen(ps), 0);
			//��������
			recv(ServerSocket, ps, 256, 0);
			printf("%s \n", ps);
		}
		closesocket(ServerSocket);
	}
	closesocket(ServerSocket);
	WSACleanup();
	return 0;
}

