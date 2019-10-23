#include "staticlib.h"
#include <stdio.h>
int main()
{
	int a[5]={121,223,-565,5,777};
	int p[]={};
	showarray(a,5);
	printf("MAX = %4d\n",max(a,5));
	printf("SUM = %4d\n",sum(a,5));
	initarray(p,8);	
    showarray(p,8);
	printf("MAX = %4d\n",max(p,5));
	printf("SUM = %4d\n",sum(p,5));
	return 0;
}
