#include <stdio.h>

int main()
{

#include <stdio.h>

    int n, pos, target, first, middle, last, i = 0, result;
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

    printf("Enter element to search = ");
    scanf("%d", &target);

    first = 0;
    last = n - 1;

    while (first <= last)
    {

        middle = (first + last) / 2;
        if (target == array[middle])
        {
            pos = middle + 1;
            printf("Element %d found at %d", target, pos);
            break;
        }
        else if (target < array[middle])
        {
            last = middle - 1;
        }

        else
        {
            first = middle + 1;
        }
    }

    if (pos == 0)
    {
        printf("Element");
    }
    else
    {
        printf("Elements");
    }
}