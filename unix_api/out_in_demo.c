#include <stdio.h>
#include <io.h>
#include <process.h>
#include <string.h>
#define BUFF_SIZE 1024
int main(int argc, char const *argv[])
{
    //每当运行一个新程序时,所有的shell都为其打开三个文件描述符：标准输入,标准输出,标准错误
    //不带缓冲区的open read write lseek close
    int n;
    // char buff[BUFF_SIZE];
    //getc 取一个字符 putc
    // while ((n=read(0,buff,BUFF_SIZE))>0)
    // {
    //     if(write(1,buff,BUFF_SIZE)!=n)
    //     {
    //         //error
    //     }
    // }
    char * str="1231231244124";
    write(1,str,strlen(str));
    return 0;
}
