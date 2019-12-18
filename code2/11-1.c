#include "my.h"

int main()
{
	int pid1,pid2,pid3,status,rv;
	printf("parent fork child1!\n");
	pid1=fork();
	if(pid1<0)
	{
		perror("1:foke failed!\n");
		return -1;
	}
	else if(pid1==0)
	{
		printf("CHILD1 PID=%d\n",getpid());
		sleep(3);
		exit(18);
	}
	else 
	{
		
		printf("parent fork child2!\n");
		pid2=fork();
		if(pid2<0)
		{
			perror("2:foke failed!\n");
			return -1;
		}
		else if(pid2==0)
		{
			printf("CHILD2 PID=%d\n",getpid());
			sleep(5);
			exit(99);
		}
		else{
				printf("parent fork child3!\n");
				pid3=fork();
				if(pid3<0)
					{
						perror("3:foke failed!\n");
						return -1;
					}			 	
					else if(pid3==0)
					{
						printf("CHILD3 PID=%d\n",getpid());
						sleep(2);
						exit(108);
					}
				else
				{
					printf("parent waiting child end!\n");
					rv=wait(&status);
					printf("1:child %d end.exit code is %d\n",rv,WEXITSTATUS(status));
					rv=waitpid(pid1,&status,0);
					printf("2:child %d end.exit code is %d\n",rv,WEXITSTATUS(status));
					rv=waitpid(pid2,&status,WNOHANG);
					printf("3:child %d end.exit code is %d\n",rv,WEXITSTATUS(status));
					return 0;
				}

			}
	}
}
