#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>


int main(int argc, char* argv[]){
    int id;
    int size;
    printf("Enter size\n");
    scanf("%d", &size);
    int arr[size];
    int go = 0;
    char* carr[size];
    id = fork();
    if(id>0){
        printf("Parent process running\n");
        int temp;
        for(int i=0;i<size;i++){
            // printf("Enter number ");
            // printf("%d", i);
            // printf(" -> ");
            scanf("%d", &arr[i]);
            // printf("\n");
        }
        
        for(int i=0;i<size;i++){
            sprintf(&carr[i], "%d", &arr[i]);
        }
        sleep(6);
        // execv("/c", arr);
    }else if(id==0){
        sleep(6);
        printf("Child process running\n");
        
        execv("/c", carr);
        printf("sfdghzdg");
        
    }
    return 0;
}