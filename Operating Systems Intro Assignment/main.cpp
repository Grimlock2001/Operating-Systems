//This will be the main program for the processes to be run from 
#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
    string test = "This is a test";
    int child = fork();
    if(child == 0){
        printf("This is a test from the child process. PID: %d", (int)getpid());
    }
    else{
        printf("This is a test from the parent process. PID: %d", (int)getpid());
        int second = fork();
        if(second == 0){
            printf("This is a test from the second child process. PID: %d", (int)getpid());
        }
        else{
            printf("This is a test from the second parent process. PID: %d", (int)getpid());
        }
    }

    return(0);
}