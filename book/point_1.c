#include <stdio.h>

void exchange(int*,int*);

int main(int argc, char const *argv[])
{
    //& 取出变量地址
    int i=1;
    int j=2;
    //申明int类型指针
    int p,*q;
    p=i;
    q=&i;
    printf("p %d ,q %d \n",p,q);
    printf("i %d ,addr %d \n",i,&i);
    printf(" i %d ,j %d \n",i,j);
    //&后跟一个变量名时，&给出该变量的地址。
    exchange(&i,&j);
    printf(" i %d ,j %d \n",i,j);
    return 0;
}
//*代表int值的存储地址
void exchange(int*i,int*j){
    int temp;
    //*取j地址的值
    temp=*j;
    *j=*i;
    //*取i指针把temp赋值进去
    *i=temp;
}