// 041_Socket_Client.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <WinSock2.h>
#include <Windows.h>

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
	SOCKET ServerSocket;
	//3、向服务器发出连接请求（connect）。
	SOCKADDR_IN socksin;
	socksin.sin_family = AF_INET;
	socksin.sin_port = htons(6688);
	socksin.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");//设置绑定的IP地址 192.168.1.111
	//printf("%04X \n",htonl(0x668899AA));
	while (1)
	{
		ServerSocket = socket(AF_INET, SOCK_STREAM, 0);
		int rf = connect(ServerSocket, (SOCKADDR*)&socksin, sizeof(socksin));
		if (rf == SOCKET_ERROR)
		{
			printf("未成功连接到服务器\n");
		}
		else
		{
			printf("成功连接到服务器\n");
			char *ps = "客户端数据来了 yjxsoft.com\n";
			char s[256];
			gets(s);
			ps = s;
			send(ServerSocket, ps, strlen(ps), 0);
			//接收数据
			recv(ServerSocket, ps, 256, 0);
			printf("%s \n", ps);
		}
		closesocket(ServerSocket);
	}
	closesocket(ServerSocket);
	WSACleanup();
	return 0;
}

