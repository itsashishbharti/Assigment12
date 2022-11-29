#include<stdio.h>
void rev(int );
int main()
{
    int n;
    printf("\nEnter Your Number=");
    scanf("%d",&n);
    rev(n);
    return 0;
}
void rev(int a)
{
    if(a==0)return;
    printf("%d",a%10);
    rev(a/10);
}