#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
	int ret;
	printf("caller:pid=%d.ppid=%d\n",getpid(),getppid());
	ret=system("./test 123 445 hello world");
	printf("After calling\n");
	sleep(10);
	return 0;
}
