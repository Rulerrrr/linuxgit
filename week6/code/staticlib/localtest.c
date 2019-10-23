#include "staticlib.h"
#include <stdio.h>
int main()
{
	int a[5]={121,223,-565,5,777};
	showarray(a,5);
	printf("MAX = %4d\n",max(a,5));
	printf("SUM = %4d\n",sum(a,5));
	return 0;
}
