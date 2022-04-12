/*#include<stdio.h>
int main()
{
    int n,i,j;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }
printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }

}*/
#include<stdio.h>
int main()
{
    int i,j,t;
    char a[1000];
    //printf("Enter the number of test cases\n");
    scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int flag=0,n=0,k=0;
	    //printf("Enter n and k for case %d:",i+1);
	    scanf("%d %d:",&n,&k);
	    //printf("\n%d %d\n",n,k);
	    //printf("Enter string:");
	    for(j=0;j<n;j++)
        {
            scanf(" %c",&a[j]);
        }

	    /*printf("\nThe entered string is:\n");
	    for(j=0;j<=n;j++)
	    printf("%c",a[j]);
	    printf("\n");

	    printf("\n0th is %c\n",a[0]);
	    printf("\n1th is %c\n",a[1]);
	    printf("\n2th is %c\n",a[2]);
	    printf("\n3th is %c\n",a[3]);
	    printf("\n4th is %c\n",a[4]);
	    printf("\n5th is %c\n",a[5]);*/

	    for(int l=0;l<=k-1;l++)
	    {
	        if(a[l]=='0')
	        a[l]='1';
	        else
	        a[l]='0';
	    }
	    /*printf("The converted string is:\n");
	    for(j=0;j<n;j++)
	    printf("%c",a[j]);
	    printf("\n");*/

	    for(int m=0;m<n/2;m++)
	    {
	        if(a[m]!=a[n-m-1])
	        {
	            flag=1;

	        }
	    }
	    if(flag==1)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
}
