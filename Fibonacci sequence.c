#include <stdio.h>

int fibonacci(int n)
{
    int f[n+1],i;

    f[0]=0;
    f[1]=1;

    for(i=2;i<n+1;i++)
        f[i]=f[i-1]+f[i-2];

    return f[n];
}


int main()
{
    int n;
    int p;

    scanf("%d", &n);

    if (n == 0)
        p= 0;
    else
        p= fibonacci(n);
    printf("The %d number in fibonacci series is %d\n",n,p);

    return 0;
}
