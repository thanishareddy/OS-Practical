/*
QUES-1:
        Write a program (using fork() and/or exec() commands) where parent and child execute: a)
        same program, same code. b) same program, different code. - c) before terminating, the parent
        waits for the child to finish its task.
SOL:
*/
#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
    cout<<"SAME PROGRAM SAME CODE : "<<endl;
    pid_t pid;
    pid=fork();

    
    if(pid<0)
    {    
        cout<<"Error , Child Not Created"<<endl;
        
    }
    
    else
    {
        system("ls");
    }
    
    
    return 0;
}