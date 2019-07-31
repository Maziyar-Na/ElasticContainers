#ifndef __EC_CONNECTION__
#define __EC_CONNECTION__

#include<linux/types.h>
#include<linux/sched.h>
#include<linux/socket.h>
#include<linux/net.h>
#include<linux/inet.h>
#include<net/sock.h>
#include<linux/memcontrol.h>


struct ec_connection {

	int (*write)(struct socket* sock, const char* buff, const size_t length, unsigned long flags);
	
	int (*read)(struct socket* sock, char* str, int max_size, unsigned long flags);

	struct socket* ec_cli;
	
};

extern int (*ec_connect_)(char*, int, int);

#endif
