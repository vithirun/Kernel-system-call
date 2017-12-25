#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(void)
{ 
	int pid=fork();
	if(pid==0)
	{
		printf(1,"parent process in child is %d\n",getppid());
	}
	else
	{
		wait();	
		printf(1,"parent process is %d\n",getpid());
	}
	exit();

}

