#include <stdio.h>
#include <dirent.h>

int main(int argc, char const *argv[])
{
    //每个进程都有个工作目录(当前目录)
    //目录
    DIR * dp;
    //目录条目 entry
    struct dirent * dirp;
    char * path="D:\\study\\old resource";
    //打开目录
    if((dp=opendir(path))==NULL)
    {
        printf("can not open %s",path);
    }
    //readdir读取目录项
    while ((dirp=readdir(dp))!=NULL)
    {
       printf("%s \n",dirp->d_name);
    }
    closedir(dp);
    
    return 0;
}
