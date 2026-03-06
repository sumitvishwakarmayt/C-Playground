#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    while (1)
    {
        printf("Enter 1 to Add. \nEnter 2 to Subtract. \nEnter 3 to Multiply.\nEnter 4 to Divide.\n");
        printf("Enter 5 to Exit.\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\nEnter two numbers:\n");
            scanf("%d%d", &a, &b);
            printf("The sum of the numbers is: %d.\n\n", a + b);
            break;
        case 2:
            printf("\nEnter two numbers:\n");
            scanf("%d%d", &a, &b);
            printf("The subtraction of the numbers is: %d.\n\n", a - b);
            break;
        case 3:
            printf("\nEnter two numbers:\n");
            scanf("%d%d", &a, &b);
            printf("The multiplication of the numbers is: %d.\n\n", a * b);
            break;
        case 4:
            printf("\nEnter two numbers:\n");
            scanf("%d%d", &a, &b);
            printf("The division of the numbers is: %d.\n\n", a / b);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid input.");
            break;
        }
    }

    getch();
}