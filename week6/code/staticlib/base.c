#include "staticlib.h"
#include <stdio.h>

void showarray(int *a,int n)
{
	int i;
    for (i=0;i<n;i++)
		printf("%4d : %4d\n",i,a[i]);

}

void initarray(int *p,int n)
{
    int i;
	srand((int)time(0));
	
	//creat random num from 1 to 100
	for(i = 0;i<n;i++)
	{
		p[i] = 1 + (int)(100.0*rand()/(RAND_MAX + 1.0));
	}
	
}
