#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    //int getc()的返回值
    int c;
    FILE * fp;
    char fname[50];
    printf("enter the name of file: ");
    scanf("%s",fname);
    
    fp=fopen(fname,"r");
    if(fp==NULL)
    {
        printf("file open fail \n");
        exit(1);
    }
    while ((c=getc(fp))!=EOF)
    {
       putchar(c);
    }
    fclose(fp);
    return 0;
}
