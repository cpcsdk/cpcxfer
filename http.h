/*
	Duke 2016
	
*/
#include <errno.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

#ifdef __WIN32__
#include <windows.h>
#include <winsock2.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/uio.h>
#include <sys/ioctl.h>
#include <sys/fcntl.h>
#include <netinet/tcp.h>

typedef int SOCKET;
#endif


#include <string>

int httpConnect(const std::string host);
int httpClose(SOCKET sd);
int httpSend(SOCKET sockfd, const std::string filename, unsigned char *data, int size, const std::string formname, const std::string path, const std::string host);
int httpSendRom(SOCKET sd, const std::string filename, unsigned char *data, int size, int slot, const std::string path, const std::string host, const std::string slotname);
int httpResponse(SOCKET sockfd);
int httpGet(SOCKET sd, const std::string host, const std::string url, int skipheader);
