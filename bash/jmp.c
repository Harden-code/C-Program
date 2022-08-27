#include <stdio.h>
//变参头文件
#include <stdarg.h>

void local_jmp();

void m_arg(int count, ...){
    int sum=0;
    va_list ap;
    //让函数可以访问的变参 从count开始
    va_start(ap,count);
    for(int i=0;i<count;i++){
        //访问下一个
        sum+=va_arg(ap,int);
    }
    printf("sum %d",sum);
    //结束访问
    va_end(ap);
}

int main(int argc, char const *argv[])
{   
    // local_jmp();
    m_arg(4,1,2,3,4);
    return 0;
}

//本地跳转 如果放在main后面就要申明函数原型
void local_jmp(){
    int n;
    head:
      scanf("%d",&n);
      if(n>2) goto head;
}