#include <stdio.h>

int out=2;

void loc_print(int);

int main(int argc, char const *argv[])
{
    extern int out;//使用别处定义的out
    printf("out->%d %d \n",out,&out);
    for(int i=0;i<2;i++){
        printf("i->%d \n",i);
        loc_print(i);
    }
    return 0;
}


void loc_print(int i){
    //块作用域的静态变量
    //变量loc存储在静态内存中，它从程序被载入到程序结束期间都存在。但是，它的作用域定义在loc_print()函数块中。只有在执行该函数时，
    //程序才能使用loc访问它所指定的对象（但是，该函数可以给其他函数提供该存储区的地址以便间接访问该对象，例如通过指针形参或返回值
    static int loc=1;
    printf("loc_print out->%d %d \n",out,&out);
    printf("loc->%d i->%d \n",loc++,i);
}