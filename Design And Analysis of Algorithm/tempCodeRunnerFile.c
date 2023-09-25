#include <stdio.h>

void swappingTwoNumber(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;
    for (int j = s; j < e; ++j)
    {
        if (arr[j] <= pivot)
        {
            i = i + 1;
            swappingTwoNumber(&arr[i], &arr[j]);
        }
    }
    swappingTwoNumber(&arr[i + 1], &arr[e]);
    return (i + 1);
}
void quickSort(int arr[], int s, int e)
{
    if (s <= e)
    {
        int q = partition(arr, s, e);
        quickSort(arr, s, q - 1);
        quickSort(arr, q + 1, e);
    }
}

int main()
{
    // int arr[7] = {10, 80, 30, 90, 40, 50, 70};
    int size;
    printf("Enter the number of elements in array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Array numbers : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, size);
    printf("After using Quick Sort : \n");
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }

    return 0;
}