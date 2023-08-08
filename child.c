#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>


int main(int argc, char** argv){
    int sum = 0;
    for(int i=0;i<argc;i++){
        sum+=atoi(argv[i]);
    }
    printf("%d", sum);
    printf("\n");
    return 0;
}