#include <stdio.h>

int main()
{

    int n, target;
    printf("Enter the number of Elements = ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value = ");
        scanf("%d", &array[i]);
    }

    printf("Enter target value = ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            printf("Target value %d found at %d", target, i + 1);
            printf("\n");
        }
    }
    return 0;
}