#include<stdio.h>
void natural(int x);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    natural(x);
    return 0;
}
void natural(int a)
{
    if(a==0)return;
    natural(a-1);
    printf("%d ",a);
}