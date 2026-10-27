#include <unistd.h>
#include <sys/wait.h>
#include<stdio.h>
int main()
{
    pid_t i=fork();
    if(i==0)
    {int cout=5;
        while(cout)
        {
            printf("我是一个子进程，我的pid是：%d，我的ppid是：%d\n ",getpid(),getppid());
            cout--;
            sleep(1);
        }

    
    }
    else if(i<0) 
    {
        perror("fork");
    }
    else 
    {
        while(1)
        {
            printf("我是一个父进程，我的pid是：%d\n ",getpid());
            sleep(1);
        }



    }
    return 0;
}


