#include <stdio.h>
#include <stdlib.h>


long int sort(long int *a,long int *b)
{
    return *a-*b;
}

int main()
{

	long int n, d, val=0;
	scanf("%ld %ld",&n,&d);
	long int len[n];
	for(int i=0; i<n; i++)
	    scanf("%ld",&len[i]);

	qsort(len, n, sizeof(long int), sort);

	for(int i=0; i<n; i++)
	{
	    if(i<n-1){
    	    if(len[i+1]-len[i]<=d)
    	    {
    	        i++;
    	        val++;
    	    }
	    }
	}
	printf("%ld\n",val);
	return 0;
}
