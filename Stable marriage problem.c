#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int prefer(int n,int arr[n][n],int woman,int val,int a)
{
  int k;
  for(k=0;k<n;k++)
  {
    if(arr[woman][k]==val)
    {
      return 1;
    }
    if(arr[woman][k]==a)
    {
      return 0;
    }
  }
}
int main()
{
  int i,iter;
  scanf("%d",&iter);
  for(int i=0;i<iter;i++)
  {
    int n,x,j,k,wo,y,z;
    scanf("%d",&n);
    int m[n][n],w[n][n],men[n],women[n];
    for(x=0;x<n;x++)
    {
      scanf("%d",&z);
      for(j=0;j<n;j++)
      {
        scanf("%d",&w[x][j]);
        w[x][j]=w[x][j]-1;
      }
    }
    for(x=0;x<n;x++)
    {
      scanf("%d ",&y);
      for(j=0;j<n;j++)
      {
        scanf("%d",&m[x][j]);
        m[x][j]=m[x][j]-1;
      }
    }
    for(x=0;x<n;x++)
    {
      men[x]=-1;
      women[x]=-1;
    }
    int fcount=n;
    while(fcount>0)
    {
      for(x=0;x<n;x++)
      {
        if(men[x]==-1)
        {
          break;
        }
      }
      for(j=0;j<n&&men[x]==-1;j++)
      {
        int wo=m[x][j];
        if(women[wo]==-1)
        {
          men[x]=wo;
          women[wo]=x;
          fcount--;
        }
        else
        {
          int ans=women[wo];
          int result=prefer(n,w,wo,ans,x);
          if(result==0)
          {
            men[ans]=-1;
            women[wo]=x;
            men[x]=wo;
          }
        }
      }
    }
    for(x=0;x<n;x++)
    {
      printf("%d %d\n",x+1,men[x]+1);
    }
  }
}
