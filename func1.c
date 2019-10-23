#include "main.h"

struct arg analyzeArray(int *arr,int len){

	struct arg args;

	args.sum = sum(arr,len);

	args.ave = ave(arr,len);

	args.max = max(arr,len);

	args.min = min(arr,len);

	return args;
	
}


int sum(int *arr,int len){

	int i,sum = 0;

	for(i = 0;i<len;i++)
		sum += arr[i];

	return sum;
}


int ave(int *arr,int len){

	return sum(arr,len)/len;

}

/*
	function : Find the maximum in an array
	param : int *arr,int len
	return : int maximum
	
*/

int max(int *arr,int len){

	int max = INT_MIN,i;

	for(i = 0;i<len;i++)
		max = max>arr[i]?max:arr[i];

	return max;
}



int min(int *arr,int len){

	int min = INT_MAX,i;

	for(i = 0;i<len;i++)
		min = min<arr[i]?min:arr[i];

	return min;
}




void show(int *arr,int len){

	int i;
	struct arg args;

	args = analyzeArray(arr,len);

	for(i = 0 ; i < len ; i++)
		printf(" %d ",arr[i]);
	printf("\n");

	printf("sum : %d, ave : %d, maximum : %d, minimum : %d\n",args.sum,args.ave,args.max,args.min);

}


void writeArray(int *arr,int len,char *fileName){

	int i;
    FILE *fp = fopen(fileName, "w");

    if ( !fp )
    {
		perror("fail to open filea");
        exit(-1);
    }
   
     
    for(i=0; i<len; i++)
    {
        fprintf(fp, "%d\n", arr[i]);
    }
     
    fclose(fp);

}

void readArray(int *arr,int len,char *fileName){

    FILE *fp = fopen(fileName, "r");
    int i = 0;
 
   if (!fp)
    {
		perror("fail to open filea");
        exit(-1);
    }
 
    while(i < len) //控制不能超过数组的大小
    {
        if ( fscanf(fp, "%d",&arr[i] )!= 1 ) //按浮点数读取数据
            break;
        i++;
    }
	show(arr,len);
    fclose(fp);

}

