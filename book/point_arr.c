#include <stdio.h>


#define SIZE 4

//void add(int * n); 数组申明
int main(int argc, char const *argv[])
{
    int stuff[SIZE];
    int staff[SIZE]; 
    //*sta=&stuff 数组名==数组首地址
    int * stu=&stuff[0];   
    int * sta=&staff[0];
    for(int i=0;i<SIZE;i++){
        //指针+1 相当于引用地址+1
        stu=stu+1;
        sta=sta+1;
        printf("index %d-> stuff %d ;staff  %d \n",i,stu,sta);
    }
    return 0;
}
