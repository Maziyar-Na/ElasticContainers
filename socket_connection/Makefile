CONFIG_MODULE_SIG=n

obj-m += cgroup_connection.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=/home/maaz/Desktop/ElasticContainers/socket_connection modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=/home/maaz/Desktop/ElasticContainers/socket_connection clean
