/*
Write a program that demonstrates the use of nice() system call. After a child process is
started using fork(), assign higher priority to the child using nice() system call.
*/
#include <stdio.h>
#include <sys/types.h>
void main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        printf("This is child process");
        nice(-1);
    }
    else
    {
        printf("This is parent process");
    }
}