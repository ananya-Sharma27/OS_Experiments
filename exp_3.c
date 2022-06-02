//Case1
#include <stdio.h>
#include <stdlib.h>
#include <systypes. h>
#include <sys/wait.h>
#include <unistd.h>
void childtask () 
{
    printf("welcome to CSE department at MIET \n");
}
void parenttask () 
{
    printf("main task is Execution\n");
}
int main(void) 
{
	pid_t pid = fork();
	if(pid == 0) {
	child Task ();
	exit (Exit_succes);
	printf("welcome to CS6 department at miet\n");
}
elseif (pid>0)
{
    wait(Null);
    parent task();
}
return Exit_success;
}


//Case2
#include <stdio. h>
#include <stdlib.h>
#include <sys/ types.h>
#include <sys/ wait. h>
#include <unistd. h>
int main (void)
{
		for (inti=1;i<=5; i++) 
		{
			pid-t pid = fork();
			if (pid == 0) 
			{
				printf("child process -> PPID = %/d, PID = % d\n", getppid (), getpid());
				exit(o);
} else {
		printf("Parent process = PID=%d\n", getpid());
		printf("waiting for child process to finish.......\n");
		wait(Null);
		printf("child process finished\n");
		}
return Exit_Success;
}


//Case3
#include <stdio. h>
#include <stdlib.h>
#include <sys/ types.h>
#include <sys/ wait. h>
#include <unistd. h>
int main (void)
{
		pid-t pid = fork();
		if (pid == 0) 
		{
		printf("child process -> PPID = %/d, PID = % d\n", getppid (), getpid());
		exit(EXIT_SUCCESS);
		}
else if(pid > 0)
{
		printf("Parent => PID: %d\n", getpid());
		printf("waiting for child process to finish.......\n");
		wait(Null);
		printf("child process finished\n");
}
else{
	printf("Unable to create child process\n");
}
return Exit_Success;
}