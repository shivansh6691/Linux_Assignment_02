#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
void callback1(void)
{
    printf("Callback 1 func called\n");
}
void callback2(void)
{
    printf("Callback 2 func called\n");
}
void callback3(void)
{
    printf("Callback 3 func called\n");
}
int main()
{
    printf("registering callback 1\n");
    atexit(callback1);
    printf("registering callback 2\n");
    atexit(callback2);
    printf("registering callback 3\n");
    atexit(callback3);
    printf("main() ...exiting now\n");
    exit(0);

    return 0;
}
