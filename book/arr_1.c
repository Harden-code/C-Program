#include <stdio.h>
#define MOUTH 12

int main(int argc, char const *argv[])
{
    //数组申请 []名在变量后面
    //const 只能读取不能写入数组
    const int mouth[MOUTH]={1,2,3,4,5,6,7,8,9,10,11,12};//数组初始化
    //sizeof 计算对象的大小
    printf("mouth size %d \n",sizeof mouth);
     printf("mouth[0] size  %d \n",sizeof mouth[0]);
    for(int i=0;i<MOUTH;i++)
    {
        printf("mouth index ->%d value->%d \n",i,mouth[i]);
    }

    //c99 语法 其余的补0
    int arr[3]={[2]=12};
    for(int i=0;i<(sizeof arr / sizeof arr[0]);i++)
    {
        printf("arr index ->%d value->%d \n",i,arr[i]);
    }
    //申明数组未设值 stuff的下标是6所以它有7个元素
    int stuff[]={1,[6]=6};
    printf("stuff size %d\n",sizeof stuff/4);
    int staff[]={1,2,[8]=1,3,4};//9+2
     printf("staff size %d\n",sizeof staff/4);
    return 0;
}
