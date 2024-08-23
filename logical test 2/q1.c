#include <stdio.h>

int main()
{
    int arr[100],n,uni=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The elements that only appears once:\n");
    for(int i=0;i<n;i++)
    {
        uni=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                uni=1;
            }
        }
        if(uni==0)
        {
            printf("%d\n",arr[i]);
        }
    }
   
    return 0;
}