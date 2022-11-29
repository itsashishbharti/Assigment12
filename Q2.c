#include<stdio.h>
void revnatural(int x);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    revnatural(x);
    return 0;
}
void revnatural(int a)
{
    if(a==0)return;
    printf("%d ",a);
    revnatural(a-1);
}