#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,t,k,l;
    char a[1000];
    printf("Enter t:");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int flag=0,count=0;
    printf("Enter n and k for %d:",i);
    scanf("%d %d:",&n,&k);
    printf("Enter string:");
	    for(j=0;j<n;j++)
        {
            scanf(" %c",&a[j]);
        }
    printf("\nThe entered string is:");
    for(j=0;j<n;j++)
        {
            printf("%c ",a[j]);
        }
    if(n==1)
        printf("YES\n");
    else if(n==2)
    {
        if(a[0]==a[1]&&k%2==0)
        {
            printf("YES\n");
        }
        if(a[0]!=a[1]&&k%2!=0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else{
         for(int m=0;m<n/2;m++)
	    {
	        if(a[m]!=a[n-m-1])
	        {
	            a[m]=a[n-m-1];
	            count++;
	        }
	        /*else
	        {
	            continue;
	        }*/
	    }

    printf("\nThe new string is    :");
    for(j=0;j<n;j++)
        {
            printf("%c ",a[j]);
        }
        printf("\nThe count is:%d",count);
    printf("\n");

	    if(count==k)
        printf("YES\n");
        else
        printf("NO\n");
    }

        }

}
