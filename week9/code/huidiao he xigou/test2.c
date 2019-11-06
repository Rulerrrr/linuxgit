#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

static void __attribute__((constructor)) before_main()
{
	printf("-------before main--------\n");
}

static void __attribute__((destructor)) after_main()
{
	printf("-------after main---------\n");
}

static void callback1(void)
{
	printf("------1------\n");
}

static void callback2(void)
{
	printf("------2------\n");
}

static void callback3(void)
{
	printf("------3------\n");
}

int main(void)
{
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);
	printf("-----this is mian------\n");
    return 0;
}
