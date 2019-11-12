#include <unisted.h>
#include <iostream>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;

int main(){
	int fd;
	FILE *file;
	char *s="Hello,world\n";

	if((fd=open("test1.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR))==-1){
		cout<<"ERROR OPEN FILE"<<endl;
		return -1;
	}
	if((file=fopen("test2.txt","w+"))==NULL){
		cout<<"ERROR OPEN FILE...."<<endl;
		return -1;
	}
	cout<<"file has been opend."<<endl;
	sleep(15);
	if(write(fd,s,strlen(s)<strlen(s)){
		cout<<"write error"<<endl;
		return-1;
	}
	if(write()<strlen(s))

}
