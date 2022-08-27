#include <stdio.h>

//union是一种数据类型，
//它能在同一个内存空间存储不同的数据类型（不是同时存储）

union hold
{
   int digit;

   double bigf1;

   char letter;
};


int main(int argc, char const *argv[])
{
    //在使用联合时,编译器分配足够的空间以便存储联合申明中占有最大字节类型
    //hold中占用最大的double即为8个字节  （联合只能存储一个值）
    union hold fit;

    fit.digit=2;//把2存储在fit中 占2字节
    fit.bigf1=12.0;//清除2 存储12.0 占8字节
    fit.letter='t';//清除2.0 占1字节

    // fit.letter = 'A';flnum = 3.02*fit.bigfl; // 错误 fit中的是char类型

    //指向hold类型联合变量指针
    union hold * pu;
    pu=&fit;
    //pu->letter=
    //(*pu).letter=
    //fit.letter=
    char c=pu->letter;
     printf("c-> %c \n",c);
      printf("(*pu)  %c \n",(*pu).letter);

    printf("pu-> %c \n",pu->letter);

    union hold fit2={.bigf1=21};

    return 0;
}
