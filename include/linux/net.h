#ifndef __LINUX_NET_H
#define __LIBRARY__
#define __LINUX_NET_H
#include <unistd.h>
#include <linux/kernel.h>

#define DEBUG_ON

#ifdef DEBUG_ON
#define debug( x ) do { printk( x ); } while(0)
#else
#define debug( x ) 
#endif

typedef unsigned short sa_family_t;

struct sockaddr {
	sa_family_t sa_family;
	char		sa_data[14];
};

_syscall3(int, socket, int, family, int, type, int, protocol)
_syscall3(int, bind, int, fd, struct sockaddr *, umyaddr, int, addrlen)
_syscall2(int, listen, int, fd, int, backlog)
_syscall3(int, accept, int, fd, struct sockaddr *, upeer_sockaddr, int *, upeer_addrlen)
_syscall3(int, connect, int, fd, struct sockaddr *, uservaddr, int, addrlen)

#endif
