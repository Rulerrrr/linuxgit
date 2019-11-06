#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	char *vector[]={"test3","222","aaa",NULL};
	printf("call:pid=%d,ppid=%d\n",getpid(),getppid());
	execvp("tets3",vector);
	printf("------after calling-------\n");
	return 0;
}
