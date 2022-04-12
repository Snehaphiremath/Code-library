#include <stdio.h>
void binary_to_decimal(long long int n)
{
    long long int a=0,l=0,base=1;

    while(n)
    {
        l=n%10;
        n=n/10;
        a+=l*base;
        base=base*2;
    }
    printf("%lld\n",a);
}

int main()
{
    int n;
    scanf("%lld",&n);
    binary_to_decimal(n);
    return 0;
}
