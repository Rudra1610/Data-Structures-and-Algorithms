#include <stdio.h>

int main()
{

    int n, key, j;
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value = ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", array[i]);
    }

    printf("\n");

    for (int i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;
        while (array[j] > key && j >= 0)
        {

            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", array[i]);
    }

    return 0;
}