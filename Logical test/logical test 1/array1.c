#include <stdio.h>

int main()
{
  int n, arr[100],i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Output:\n");
  for (i = 0; i < n; i++)
  {
    if (arr[i] % 2 != 0)
    {
      printf("%d\n", arr[i]);
    }
  }

  return 0;
}