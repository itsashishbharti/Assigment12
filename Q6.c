#include<stdio.h>
void reveven(int x);
int main()
{
    int x;
    printf("\nEnter Your Number=");
    scanf("%d",&x);
    reveven(x);
    return 0;
}
void even(int a)
{
    if(a==0)return;
    printf("%d ",a);
    reveven(a-2);
    
}