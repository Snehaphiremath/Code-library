#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y);
void display(int a[20],int n);
void quickSort(int a[20],int first,int last);

int main()
{
    int a[20],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quickSort(a,0,n-1);
    printf("\nThe sorted list is: ");
    display(a,n);
}

void quickSort(int a[20],int first,int last)
{
    int i,j,pivot;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                swap(&a[i],&a[j]);
            }
        }
        swap(&a[pivot],&a[j]);
        quickSort(a,first,j-1);
        quickSort(a,j+1,last);
    }
}

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void display(int a[20],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

