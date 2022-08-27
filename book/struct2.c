#include <stdio.h>

struct func{
    char name[10];
    double bankfund;
    double savefund;
};

double add (const struct func * );

int main(int argc, char const *argv[])
{
    struct func a={"name",19.0,290.0};
    //不是赋值地址 而是重新构造个新的
    struct func b=a;
    printf("a addr %d bankfund %.2f: b.addr %d bankfund %.2f \n",&a.bankfund,a.bankfund,&b.bankfund,b.bankfund);
    a.bankfund=12.0;
    b.bankfund=99.0;
    printf("change a addr %d bankfund %.2f:b.addr %d bankfund %.2f \n",&a.bankfund,a.bankfund,&b.bankfund,b.bankfund);
    struct func * pr_a=&a;
    //浮点占位符
    printf("add %.2f",add(pr_a));
    return 0;
}
/**
 * 把指针作为参数有两个优点：无论是以前还是现在的C实现都能使用这种方法，而且执行起来很快，只需要传递一个地址
 * 。缺点是无法保护数据。被调函数中的某些操作可能会意外影响原来结构中的数据。不过，ANSI C新增的const限定符解决了这个问题。
 * 
 * 把指针作为参数有两个优点：无论是以前还是现在的C实现都能使用这种方法，而且执行起来很快，只需要传递一个地址。缺点是无法保护数据
 * 。被调函数中的某些操作可能会意外影响原来结构中的数据。不过，ANSI C新增的const限定符解决了这个问题。
 * 
 */
//传入结构体指针
double add(const struct func * f){
    return f->bankfund+f->savefund;
}
//传入结构体指针
double add_(const struct func f){
    return f.bankfund+f.savefund;
}
