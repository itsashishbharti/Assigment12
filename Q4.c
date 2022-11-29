#include<stdio.h>
void revodd(int x);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    revodd(x);
    return 0;
}
void revodd(int a)
{
    if(a==0)return;
    if(a%2!=0)
    printf("%d ",a);
    revodd(a-1);
    
}