#include <stdio.h>

void decimal_to_binary(int n)
{
    int a[100];
    int i=0,j;

    while (n > 0)
        {
        a[i]=n%2;

        n=n/2;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
        printf("%d", a[j]);
}

int main()
{
    int n;
    scanf("%d",&n);
    decimal_to_binary(n);
    return 0;
}
