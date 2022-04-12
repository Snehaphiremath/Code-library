/*Find the longest increasing subsequence in given array*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int LIS(int a[100],int n);
int main()
{
    for (int s=0;s<10;s++)
    {
        int a[100],n,i,j;
    cout <<"\nEnter the number of elements:";
    cin >>n;
    cout <<"Enter the elements:";
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }
     cout <<"The longest increasing subsequence has elements:";
    cout <<LIS(a,n);
    }
}
int LIS(int a[100],int n)
{
    int lis[n];
    int i,j;
    lis[0]=1;
    for(i=1;i<n;i++)
    {
        lis[i]=1;
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j] && lis[i]<lis[j]+1)
                lis[i]=lis[i]+1;
        }
    }
    return *max_element(lis,lis+n);
    /*printf("\nThe longest increasing subsequence is:");
    for(i=0;i<n;i++)

    printf("%d ",lis[i]);*/

}
