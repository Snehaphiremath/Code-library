// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j,pass=0;
   printf("\nBubble Sort initiated\n");
   for (i = 0; i < n-1; i++)
{
    pass++;
    printf("\nPass %d\n",pass);
    printf("\ni is %d\n",i);
    // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
       {

           printf("j is %d\n",j);
           if (arr[j] > arr[j+1])
           {
               printf("\nar[j]that is %d was greater than ar[j+1] which is %d\n",arr[j],arr[j+1]);
              swap(&arr[j], &arr[j+1]);
              printf("\nar[j] and ar[j+1] got swapped\n");
              printArray(arr, n);
           }
           else if(arr[j]<arr[j+1])
           {
              printf("\nar[j]that is %d was less than ar[j+1] which is %d\n So we didnt swap\n",arr[j],arr[j+1]);
           }
           printf("\nj is incremented by 1\n");
       }
       printf("\nj became equal to n-i-1 and we came out of for loop\nSo now i is incremented by 1\n");
}

printf("\nnow i became equal to n-1 so we came out of the loop\n");

}



// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array\n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
