#include<stdio.h>
void odd(int x);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int a)
{
    if(a==0)return;
    if(a%2!=0)
    printf("%d ",a);
    odd(a-1);
    
}