#include "mylib.h"
#include <dlfcn.h>
#define N 5
int main()
{
	void *hd;
	void (*f1)(),(*f2)();
	int (*f3)(),(*f4)();
	char *error; 
	int a[N];
	hd=dlopen("../dynamiclib/libdynamic.so",RTLD_LAZY);
	if(!hd)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	f1=dlsym(hd,"initarray");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}

	f2=dlsym(hd,"showarray");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}

	f3=dlsym(hd,"max");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}

	f4=dlsym(hd,"sum");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
 
	f1(a,N);
	printf("show array\n");
	f2(a,N);  
	printf("\narray's max=%d\n",f3(a,N));
	printf("array's sum=%d\n",f4(a,N)); 
	if(dlclose(hd)<0)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);	
	}
	return 0;
}

