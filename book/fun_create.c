#include <stdio.h>
#define NAME "HELLO,WORLD"
#define WITHD 40
//在使用函数时,需要申明函数原型
void print();

int main(int argc, char const *argv[])
{
    print();
    printf("%s \n",NAME);
    print();
    return 0;
}

void print(){
    
    for (int i = 0; i < WITHD; i++)
    {
        putchar('*');
    }
    putchar('\n');
}
