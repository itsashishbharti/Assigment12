#include<stdio.h>
void dtob(int );
int main()
{
    int n;
    printf("\nEnter Your numbar= ");
    scanf("%d",&n);
    dtob(n);
    return 0;
}
void dtob(int x)
{
    if(x==0)
    {
    return ;
    }
    else
    {
    dtob(x/2);
    printf("%d",x%2);
    }
}