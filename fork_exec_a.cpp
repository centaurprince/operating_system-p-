#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h> 

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

