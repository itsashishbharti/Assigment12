#include<stdio.h>
void even(int x);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    even(x);
    return 0;
}
void even(int a)
{
    if(a==0)return;
    even(a-2);
    printf("%d ",a);
    
}