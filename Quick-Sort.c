#include <stdio.h>

int partition(int array[], int low, int high)
{
    int pivot = array[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (array[i] <= pivot)
        {
            i++;
        }

        while (array[j] >= pivot)
        {
            j--;
        }

        if (i < j)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    } while (i < j);

    int temp = array[low];
    array[low] = array[j];
    array[j] = temp;
    return j;
}

void quicksort(int array[], int low, int high)
{
    int partitionindex;

    if (low < high)
    {
        partitionindex = partition(array, low, high);
        quicksort(array, low, partitionindex - 1);
        quicksort(array, partitionindex + 1, high);
    }
}
void main()
{

    int array[100], k, i, n, j, temp, min;

    printf("Enter the Number of elements to be Sorted:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element: ", i + 1);
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, n - 1);

    printf("The Array After Sorting is:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}