#include <stdio.h>
// #include <stdlib.h>

void row_add(int*);

void set(int*);

int main(int argc, char const *argv[])
{
    int row=0;
    printf("row main: %d\n",&row);
        //获取row的指针
    row_add(&row);
    printf("row: %d\n",row);
    set(&row);
    printf("set row: %d\n",row);
    return 0;

}
//* 取出指针的值
void row_add(int *row){
    //取出row指针的值 赋值到pr
    int pr=*row;
    //在row的指针取出值+1
    *row=*row+1;
    printf("row %d - addr: %d\n",pr,row);
    
}


void set(int *row)
{
    *row=4;
    printf("row %d",*row);
}