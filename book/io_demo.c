#include <stdio.h>

void echo();

int main(int argc, char const *argv[])
{
    echo();
    return 0;
}

void echo()
{
    char c;
    while ((c=getchar())!=EOF)
    {
       putchar(c);
    }
}