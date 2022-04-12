#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,m,k,i,j,a[1000];
    char b[1000];

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter the string:");
        for(j=0;j<n;j++)
        {
            int s=0;
            scanf(" %c",&b[j]);
            s=b[j]-'0';
            a[j]=s;
            printf("\n%c %d",b[j],a[j]);
        }
    }
}
