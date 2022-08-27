#include <stdio.h>
//变量的定义在函数的外面，具有文件作用域file scope(外部引用文件也可以引用)
/**
 * 通常在源代码（.c扩展名）中包含一个或多个头文件（.h扩展名）。头文件会依次包含其他头文件，所以会包含多个单独的物理文件
 * 。但是，C预处理实际上是用包含的头文件内容替换#include指令。所以，编译器把源代码文件和所有的头文件都看成是一个包含信息的单独文件
 * 。这个文件被称为翻译单元（translation unit）。描述一个具有文件作用域的变量时，它的实际可见范围是整个翻译单元。
 * 如果程序由多个源代码文件组成，那么该程序也将由多个翻译单元组成。每个翻译单元均对应一个源代码文件和它所包含的文件。
 * 
 */
//文件作用域,从定义处到文件末尾
int i=2;

//内部链接 属于文件私有,只能在改文件中使用
static int inner=1;
//外部链接
int outer=2;

int main(int argc, char const *argv[])
{
    /**
     * c中的作用域:块作用域,函数作用域,函数原型作用域,文件作用域
     */
    int entity=0;
    //pt是名称
    int * pt=&entity;
    //char 的指针 const保证str指向字符串不能被改变,但无法保证pc不执行别的字符串
    const char * str="12";
    //链接 外部(可以在多个文件中使用)和内部(翻译单元)=>即一个源代码文件和它所包含的头文件
    printf("str %s",str);
    return 0;
}
