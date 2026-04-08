#include <stdio.h>
#include <sys/types.h>
void main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        printf("This is child process and pid = %d\n", pid);
    }
    else
    {
        printf("This is parent process and pid = %d\n", pid);
    }
}