// 040_Socket_Server.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "WinSock.h"
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

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
	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);
	//3�����׽��ְ󶨵�һ�����ص�ַ�Ͷ˿��ϣ�bind��
	SOCKADDR_IN socksin;
	socksin.sin_family = AF_INET;
	socksin.sin_port = htons(6688);
	socksin.sin_addr.S_un.S_addr = htonl(INADDR_ANY);//���ð󶨵�IP��ַ 192.168.1.111
	//printf("%04X \n",htonl(0x668899AA));
	bind(ServerSocket, (SOCKADDR*)&socksin, sizeof(socksin));
	//	4�����׽�����Ϊ����ģʽ��׼�����տͻ�����listen��
	listen(ServerSocket, 4);


	//	5���ȴ��ͻ������������������󣬽����������󣬷���һ���µĶ�Ӧ�ڴ˴����ӵ��׽��֣�accept��
	SOCKADDR_IN clientsin;
	int len = sizeof(SOCKADDR_IN);
	while (1)
	{


		//5������ͻ��˵� �׽��־��clientSocket
		SOCKET clientSocket = accept(ServerSocket, (SOCKADDR*)&clientsin, &len);
		//	6���÷��ص��׽��ֺͿͻ��˽���ͨ�ţ�send/recv��
		//	7�����أ��ȴ���һ�ͻ����� �ص���5��
		char s[256] = { 0 };
		recv(clientSocket, s, 256, 0);
		if (stricmp(s, "exit") == 0)
		{
			return 0;//�˳�����˳���
		}
		send(clientSocket, "exit", 5, 0);
		printf("Client Data:%s \n ", s);
		closesocket(clientSocket);
	}
	closesocket(ServerSocket);
	WSACleanup();
	return 0;
}

