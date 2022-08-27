#include<stdio.h>




  //结构体
    struct point
    {
        /* data */
        int i;
        int j;
    } ;
int main(int argc, char const *argv[])
{   
  

    struct point p={1,2};
    struct point *pp;
    //
    pp=&p;

    int i;
    printf("%d %d\n",i,&i);
    
    printf("x->%d",pp->i);
    
    /* code */
    return 0;
}
