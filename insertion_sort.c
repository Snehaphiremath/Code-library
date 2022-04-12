#include<stdio.h>
#include<stdlib.h>

void insertionSort(int a[20],int n);
void display(int a[20],int n);

void insertionSort(int a[20],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main()
{
    int i,n,a[20];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionSort(a,n);
    printf("\nSorted array: ");
    display(a,n);

}
void display(int a[20],int n)
{
    int i;
    printf("\n");
           for(i=0;i<n;i++)
        printf(" %d ",a[i]);

}
