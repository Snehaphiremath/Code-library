#include<stdio.h>
int main()
{
    int t,n,a[100000];
    printf("Enter number of test cases:\n");
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        printf("\nEnter n for test %d",i);
        scanf("%d",&n);
        printf("Enter string");
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        printf("\nThe entered string for t=%d is:",i);
        for(int j=0;j<n;j++)
        {
            scanf("%d",a[j]);
        }

    }
}
