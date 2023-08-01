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
		printf("Starting Child process\n");
		sleep(1);
		printf("Exiting child process\n");
		exit(2);
		
	}else{
		printf("Starting Parent process\n");
		sleep(6);
		wait(NULL);
		printf("Exiting parent process\n");
	}	

}

