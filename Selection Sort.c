// C program for implementation of selection sort
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


void selectionSort(int arr[], int n)
{
    int i, j, min_idx,pass=0;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        pass++;
        printf("\nPass %d\ni is %d\n",pass,i);
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)

        {
        printf("\nj is %d\n",j);
        if (arr[j] < arr[min_idx])
        {
            printf("\n%dth element (%d) was less than our minimum element (%d)\n",j,arr[j],arr[min_idx]);
            min_idx = j;
            printf("\n So min_index is now %d",min_idx);
        }

        else if(arr[j]>arr[min_idx])
        {
            printf("\n skipped as jth element %d is greater than min %d\n",arr[j],arr[min_idx]);
        }
        }
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
        printf("\nSwap the found minimum element with the first element\n");
        printArray(arr, n);
    }
}


// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("\nOriginal Array\n");
    printArray(arr, n);

    selectionSort(arr, n);
    printf("\n\nSorted array: \n");
    printArray(arr, n);
    return 0;
}
