#include <stdio.h>

int main()
{

    int n;
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
        printf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] != array[j])
            {

                int temp = array[i];
                array[i] = array[j];
                array[i];
            }
        }
    }

    return 0;
}