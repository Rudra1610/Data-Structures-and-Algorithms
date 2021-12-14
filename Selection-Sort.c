#include <stdio.h>

int main()
{

    int n, min;
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value");
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {

                min = j;
                int temp = array[min];
                array[min] = array[i];
                array[i] = temp;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}