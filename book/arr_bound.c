#include <stdio.h>
#define SIZE 4
int main(int argc, char const *argv[])
{
    //在c中编译器没有对 数组下标越界进行判断
    int v1=44;
    int arr[4]={1,2,3,4};
    int v2=99;
    printf("arr[-1] %d \n",&arr[-1]);
    printf("v2 %d \n",&v2);

    printf("arr[4] %d \n",&arr[4]);
    printf("v1 %d \n",&v1);
    return 0;
}
