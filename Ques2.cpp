/*
QUES-2:
        Write a program to report behaviour of Linux kernel including kernel version, CPU type and model. (CPU information)
SOL:
*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/utsname.h>
using namespace std;
int main()
{
    int m=0;
    struct utsname s1;
    m=uname(&s1);
    
    if(m==0)
    {
        printf("\n The name of System:%s , system" , s1.sysname);
        printf("\n The version:%s" , s1.version);
        printf("\n The Machine:%s" , s1.machine);
        printf("\n");
        system("cat /proc/cpuinfo | awk 'NR==3, NR==4{print}' \n");
    }
    
    else
    {
        printf("Error");
    }
    return 0;
}