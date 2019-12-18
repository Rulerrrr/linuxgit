#include "my.h"

int main()
{
	pid_t p;
    int i=0;
    for(i;i<3;i++)
	{
		p=fork();
  		if(p==0) 
        printf("%d child %4d %4d %4d/n",i,getppid(),getpid(),p); 
        else
    	printf("%d parent %4d %4d %4d/n",i,getppid(),getpid(),p); 
	}
   
    return 0;


}
