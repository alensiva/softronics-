#include <stdio.h>
#include <string.h>
int main()
{
    char s[100] = "python programming", ch = {'p'}, temp[50];
    int i, n;
    n = strlen(s);
    for (i < 0; i < n; i++)
    {
        if (s[i] != ch && s[i]!= '\0')
        {
            temp[i] = s[i];
        }
        else
        {
            if(s[i]==ch)
            {
                temp[i]++;
            }
        }
    }

    printf("\noutput is: %s", &temp);
    return 0;
}
