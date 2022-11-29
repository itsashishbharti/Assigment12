#include<stdio.h>
void dto(int );
int main()
{
    int n;
    printf("\nEnter Your numbar= ");
    scanf("%d",&n);
    dto(n);
    return 0;
}
void dto(int x)
{
    if(x==0)
    return;
    else
    dto(x/8);
    printf("%d",x%8);
}