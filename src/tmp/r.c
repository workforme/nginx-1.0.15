#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/fcntl.h>

int main(){
int fd;
if(fd=open("aaa",O_RDWR|O_CREAT|O_TRUNC,S_IRWXU)<0)
{
	printf("zzzzz\n");
};

while(1){
sleep(1);
}
return 0;
}
