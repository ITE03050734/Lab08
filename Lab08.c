#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

int main()
{
	int pid;
	int status=0;
	int i;
	for(i=0;i<3;i++)
	{
		pid=fork();
		if(pid!=0)
		{
			printf("Process ID:%d\n",pid);    
			pid=wait(&status);
		}
		else
		{
			printf("His Process ID:%d & Parent's Process ID:%d",getpid(),getppid());
			printf("\n");
			exit(status);
		}
	}

	return 0;
}
