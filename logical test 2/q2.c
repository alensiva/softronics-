#include <stdio.h>
int main()
{
    int hs[100];
    int n;
    int i;
    int rob=0;
    printf("enter the number of house :");
    scanf("%d",&n);
    printf("enter the house number :");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&hs[i]);
    }

    printf(" amount robbed :\n");

    for(i=1;i<=n;i=i+2)
    {
        rob=rob+hs[i];
    }
    printf("%d",rob);
}