#include<stdio.h>
#define pf printf("\n");
#define sc scanf("%d", &n);
void quickSort(int arr[], int, int);

int main()
{
    int arr[1001], i, n;
    sc;
    for(i = 0; i<n; i++)
    scanf("%d", &arr[i]);

    quickSort(arr, 0, n-1);
    for(i = 0; i<n; i++)
        printf("%d ", arr[i]);

    pf;

    return 0;
}

void quickSort(int arr[], int first, int last)
{
    int pivot, i, j, temp;
    if(first<last)
    {
        pivot = first;
        i = first;
        j = last;

        while(i<j)
        {
            while(arr[i]<=arr[pivot] && i<last)
                i++;

            while(arr[j]>arr[pivot])
                j--;

            if(i<j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        quickSort(arr, first, j-1);
        quickSort(arr, j+1, last);
    }
}
