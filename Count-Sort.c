#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int n, i;

int maximum(int *array, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (max < array[i])
        {

            max = array[i];
        }
    }
    return max;
}

void countSort(int *array, int n)
{
    int i, j;
    int max = maximum(array, n);

    int *countArray = (int *)malloc((max + 1) * sizeof(int));
    for (i = 0; i < max + 1; i++)
    {
        countArray[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        countArray[array[i]]++;
    }

    i = 0;
    j = 0;

    while (i < max + 1)
    {

        if (countArray[i] > 0)
        {
            array[j] = i;
            countArray[i]--;
            j++;
        }
        else
        {

            i++;
        }
    }
}

int main()
{

    printf("Enter the number of elements = ");
    scanf("%d", &n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the value = ");
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    countSort(array, n);

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}