#include<stdio.h>
#include<unistd.h>

int main()
{
printf("I am going to execute program\n");
execl("/bin/ls","ls","-lh",0);
printf("i executed ls program");
printf("i executed ls program");
printf("i executed ls program");
}
