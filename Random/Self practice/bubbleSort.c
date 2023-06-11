/*                          {{ Description }}

    In this Bubble Sorting humko sirf pehle aur agle umber ko compare karna h
    jo bada hoga use aage wale se [swap] kar denge.
    Aur har pass me last number sorted rahega (fixed):

    [7,11,9,2,17,4]

    1st pass
    [7,11,9,2,17,4]
    [7,9,11,2,17,4]
    [7,9,2,11,17,4]
    [7,9,2,11,17,4]
    [7,9,2,11,4,17]

    2nd pass(17 already sorted)
    [7,9,2,11,4,17]
    [7,2,9,11,4,17]
    [7,2,9,11,4,17]
    [7,2,9,4,11,17]

    3rd pass (11,17 is already sorted)
    [2,7,9,4,11,17]
    [2,7,9,4,11,17]
    [2,7,4,9,11,17]

    4th pass (9,11,17 is already sorted)
    [2,7,4,9,11,17]
    [2,4,7,9,11,17]

    5th pass (7,9,11,17 is already sorted)
    [2,4,7,9,11,17]



*/
#include <stdio.h>

void bubbleSort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int *arr, int n)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{

    int arr[] = {7, 11, 9, 2, 17, 4};
    int n = 6;
    // Printing array Before Sorting;
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}