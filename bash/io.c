#include <stdio.h>
int main(int argc, char const *argv[])
{   
    //标准io带有缓冲区
    FILE * fd;
    char * name="read.txt";
    //打开 file
    fd=fopen(name,"rw+");
    
    //设则缓冲区
    // char buf[5];
    //设则5才会写文件 不设置4k才会写
    // setvbuf(fd, buf, _IOFBF, 5);

    if(fd==NULL){
        printf("can not open");
    }
    char ch;
    //输入字符
    while (scanf("%c",&ch))
    {
       if(ch=='z')break;
       putc(ch,fd);
    }
    //把缓冲区的字符流冲刷进去
    // fflush(fd);
    //重新设置下标
    fseek(fd,0,0);
    //读取字符 
    while ((ch=getc(fd))!=EOF)
    {
       printf("%c",ch);
    }
    
    return 0;
}