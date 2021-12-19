#include <stdio.h>

int n, stack[20], top = -1, choice;

void push();
void pop();
void display();

int main()
{

    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("\n");

    do
    {
        printf("1 Push, 2 Pop, 3 Display\n");
        printf("Enter choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            printf("Choose Again");
            break;
        }

    } while (choice != 4);

    return 0;
}

void push()
{

    if (top == n)
    {
        printf("Stack Overflow\n");
    }

    else
    {
        printf("Enter a value = ");
        top++;
        scanf("%d", &stack[top]);
    }
}

void pop()
{

    if (top == -1)
    {
        printf("Stack Underflow\n");
    }

    else
    {
        printf("Popped value = %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }

    printf("\n");
}