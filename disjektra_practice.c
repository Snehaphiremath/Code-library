#include<stdio.h>
#include<conio.h>
#define inf 9999

void disjektra(int g[10][10],int n,int startnode);
int main()
{
    int g[10][10],i,j,n,s;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("Enter the matrix: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&g[i][j]);
    printf("\nThe entered matrix is: ");
    for(i=0;i<n;i++)
        {
            printf("\n");
        for(j=0;j<n;j++)
           printf(" %d ",g[i][j]);
        }
    printf("\nEnter start node: ");
    scanf("%d",&s);
    disjektra(g,n,s);
}

void disjektra(int g[10][10],int n,int startnode)
{
   int cost[10][10],dist[10],pred[10],visited[10];
   int count,min,next,i,j;

   for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(g[i][j]==0)
           cost[i][j]=inf;
        else
            cost[i][j]=g[i][j];

   for(i=0;i<n;i++)
   {
       dist[i]=cost[startnode][i];
       pred[i]=startnode;
       visited[i]=0;
   }

   dist[startnode]=0;
   visited[startnode]=1;
   count=1;

   while(count<n-1)
   {
       min=inf;
       for(i=0;i<n;i++)
        if(dist[i]<min && !visited[i] )
       {
           min=dist[i];
           next=i;
       }
       visited[next]=1;
       for(i=0;i<n;i++)
       if(!visited[i])
        if(min+cost[next][i]<dist[i])
       {
           dist[i]=min+cost[next][i];
           pred[i]=next;
       }

       count++;
   }

   for(i=0;i<n;i++)
    if(i!=startnode)
   {
       printf("\nDistance of node %d is %d",i,dist[i]);
       printf("\nPath=%d",i);

       j=i;
       do
       {
           j=pred[j];
           printf("<-%d",j);
       }while(j!=startnode);
   }

}
