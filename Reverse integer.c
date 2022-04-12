#include <stdio.h>
int main()
{
    int n,r=0,s=0;
    scanf("%d", &n);
    while(n != 0)
    {
        s=n%10;
        r=r*10+s;
        n=n/10;
    }
    printf("%d",r);
    return 0;
}
