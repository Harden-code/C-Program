#include <stdio.h>

#define SIZE 5
//预编译 处理器 
//在使用多行函数时，每次换行要在末尾加\.另外参数不用加类型限制 
#define FOREACH(arr) for(int i=0;i<sizeof arr/sizeof arr[0];i++) \
{printf("value %d \n",arr[i]);} \



int main(int argc, char const *argv[])
{
    int arr[SIZE]={1,2,4};
    int arr1[SIZE];
    // arr1[SIZE]={1,2};
    //
    // arr1={1,2,3};
    // arr1=arr; 不能直接赋值
    FOREACH(arr1);
    return 0;
}
