#include<stdio.h>

void goto_f();
int main(int argc, char const *argv[])
{ 
    goto_f();
    return 0;
}


void goto_f(){      
    int i=0;
    
    while (i<=5)
    {
        if(i>3){
            goto part;
        }else if(i==2){
            goto end;
        }
        i++;
    }
    part: printf("i=%d \n",i);
    end: printf("i=%d \n",i);
}