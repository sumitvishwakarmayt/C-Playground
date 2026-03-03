#include <stdio.h>

int main()
{
    int num, fact = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        printf("The factorial of %d is 1.", num);
    }
    else if (num > 1)
    {
        while (num > 0)
        {
            fact = fact * num;
            num -= 1;
        }
        printf("The factorial is %d", fact);
    }
    else
    {
        printf("The entered number is negative or invalid bruh! ♥");
    }
    getchar();
    getchar();
    return 0;
}