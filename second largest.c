#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(long int *a, long int *b);
int partition(long int array[], long int low, long int high);
void quickSort(long int array[], long int low, long int high);
int main() {

    long int a[1000000],n,i,b;
    scanf("%ld",&n);
    if(n==0)
        printf("-1");
    else
    {
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);

     quickSort(a,0,n-1);

    /*for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j+1]>a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }*/
    b=a[1];
    i=0;
        for(i=0;i<n;i++)
        {
            printf("%ld ",a[i]);
        }

    /*while(i!=n && a[i]==b)
        i++;

   if(i==n)
       printf("-1");
    else
    printf("%ld",a[i+1]);
    }*/
}
}
void swap(long int *a, long int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(long int array[], long int low, long int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(long int array[], long int low, long int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

