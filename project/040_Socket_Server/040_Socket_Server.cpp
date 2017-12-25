// 040_Socket_Server.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "WinSock.h"
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int _tmain(int argc, _TCHAR* argv[])
{
	//1加载套接字库
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;

	wVersionRequested = MAKEWORD(2, 2);

	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0) {//表示初始化不成功
		/* Tell the user that we could not find a usable */
		/* WinSock DLL.                                  */
		//return 0;
		printf("加载套接字库出错 \n");
	}
	//2创建一个套接字 供使用
	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);
	//3、将套接字绑定到一个本地地址和端口上（bind）
	SOCKADDR_IN socksin;
	socksin.sin_family = AF_INET;
	socksin.sin_port = htons(6688);
	socksin.sin_addr.S_un.S_addr = htonl(INADDR_ANY);//设置绑定的IP地址 192.168.1.111
	//printf("%04X \n",htonl(0x668899AA));
	bind(ServerSocket, (SOCKADDR*)&socksin, sizeof(socksin));
	//	4、将套接字设为监听模式，准备接收客户请求（listen）
	listen(ServerSocket, 4);


	//	5、等待客户请求到来；当请求到来后，接受连接请求，返回一个新的对应于此次连接的套接字（accept）
	SOCKADDR_IN clientsin;
	int len = sizeof(SOCKADDR_IN);
	while (1)
	{


		//5、保存客户端的 套接字句柄clientSocket
		SOCKET clientSocket = accept(ServerSocket, (SOCKADDR*)&clientsin, &len);
		//	6、用返回的套接字和客户端进行通信（send/recv）
		//	7、返回，等待另一客户请求 回到第5步
		char s[256] = { 0 };
		recv(clientSocket, s, 256, 0);
		if (stricmp(s, "exit") == 0)
		{
			return 0;//退出服务端程序
		}
		send(clientSocket, "exit", 5, 0);
		printf("Client Data:%s \n ", s);
		closesocket(clientSocket);
	}
	closesocket(ServerSocket);
	WSACleanup();
	return 0;
}

