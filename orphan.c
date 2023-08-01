#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(){
	int cpid = fork();
	if(cpid == -1)printf("Error\n");
	if(cpid == 0){
		int pid, ppid;
		pid = getpid();
		ppid = getppid();
		printf("Child's process id -> %d\n", pid);
		printf("Parent's process id -> %d\n", ppid);
		sleep(5);
		pid = getpid();
		ppid = getppid();
		printf("New Child's process id -> %d\n", pid);
		printf("New Parent's process id -> %d\n", ppid);
		
	}else{
		sleep(2);
	}	

}

