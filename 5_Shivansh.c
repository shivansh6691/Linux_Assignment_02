#include <stdio.h>
#include <fcntl.h>
void main()
{
 int fd, res;
 int pid_1;
pid_1=fork();
if(pid_1==0){
    char buff[60];

    fd = open("openfd.c", O_CREAT | O_RDWR, 777);
    printf("\n The file descriptor returned is %d ", fd);
    read(fd, buff, 60);
    printf("new child process pid =%d\n",getpid());
printf("new child parent process ppid =%d\n",getppid());
}

else{
//sleep(3);
printf("new1 child process pid =%d\n",getpid());
printf("new child parent process ppid =%d\n",getppid());
}
while(1);
return 0;


 close(fd);
 }
 
 
