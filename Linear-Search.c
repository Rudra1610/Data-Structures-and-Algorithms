#include <stdio.h>

int main()
{

    int n, temp;
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value = ");
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (array[i] > array[j])
            {

                temp = array[i];
                array[i] = array[j];
                array[i] = temp;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", array[i]);
    // }

    return 0;
}