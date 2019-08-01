#include <linux/net.h>

int sys_socket(int family, int type, int protocol)
{
	debug("ok...system socket!\n");
	return 0;
}

int sys_bind(int fd, struct sockaddr *umyaddr, int addrlen)
{
	debug("ok...system bind\n");
	return 0;
}

int sys_listen(int fd, int backlog)
{
	debug("ok...system listen\n");
	return 0;
}

int sys_accept(int fd, struct sockaddr *upeer_sockaddr, int *upeer_addrlen)
{
	debug("ok...system accept\n");
	return 0;
}

int sys_connect(int fd, struct sockaddr *uservaddr, int addrlen)
{
	debug("ok...system connect\n");
	return 0;
}

