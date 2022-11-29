#include<stdio.h>
void sqnatural(int x);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    sqnatural(x);
    return 0;
}
void sqnatural(int a)
{
    if(a==0)return;
    sqnatural(a-1);
    printf("%d ",a*a);
}