#include<stdio.h>

int main()
{
    printf("hello world\n");
    printf("enter a number:");
    int x,y;
    scanf("%d",&x);
    printf("enter a number:");
    scanf("%d",&y);
    int z=(x+y)/2;
    printf("the result of (%d+%d)/2=%d",x,y,z);
    return 0;

}