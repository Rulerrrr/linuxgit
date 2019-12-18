#include "my.h"

void * threadfun(void *arg)
{
	pthread_exit();
}

int main()
{
	pthread_t tid;
	int i,ret;
	struct timeval tv1,tv2;
	struct timezone tz;
	

}


