#include <stdio.h>

int operation_a(int a,int b);

int operation_b(int a,int b);

//函数指针
void show(int a ,int b ,int (*pr)(int,int));

int main(int argc, char const *argv[])
{
    //声明一个函数指针
    int (*pr_a)(int a,int b);

    pr_a=operation_a;

    int a=pr_a(20,10);

    printf("a %d \n",a);

    int (*pr_b)(int a,int b);

    pr_b=operation_b;

    int b= pr_b(20,10);

    printf("b %d \n",b);

    show(20,19,pr_a);
    return 0;
}

int operation_a(int a,int b){
    return a+b;
}

int operation_b(int a,int b){
    return a-b;
}

void show(int a ,int b ,int (*pr)(int,int)){
    int result=pr(a,b);
    printf("result %d \n",result);
}
