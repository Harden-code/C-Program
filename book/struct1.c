#include <stdio.h>
//strcpy 提供原型
#include <string.h>
//malloc free 提供原型
#include <stdlib.h>
struct book
{
    char name[10];

    int price;
};

int main(int argc, char const *argv[])
{
    //使用结构体变量 必须加struct
    struct book b={"name",2};
    //结构体的初始化
    struct book b1={.name="NA"};
    struct book* pr= &b;
    printf("book name %s \n",b.name);
     printf(" book* name %s \n",(*pr).name);
    // char* p = "hello";
    //复制
    strcpy(b.name,"hello");
    printf("pr->name %s \n",pr->name);
    pr->price=12;
    printf("pr->price %d  %d \n",pr->price,b.price);

    //申请book的内存 注意返回指针
    struct book *lib=malloc(sizeof(struct book));
    lib->price=1;
    strcpy(lib->name,"lib");
    printf("lib->name %s lib->price %d \n",lib->name,lib->price);
    free(lib);

    return 0;
}
