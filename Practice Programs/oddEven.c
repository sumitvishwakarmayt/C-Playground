void main()
{
    int num, count = 0;
    while (1)
    {
        if (count == 0){
            printf("\nEnter the number to check for odd or even:");
            count++;
        }
        else{
            printf("\nEnter the another number to check for odd or even:");
        }
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("The entered number %d is even.", num);
        }
        else
        {
            printf("The entered number %d is odd.", num);
        }
    }
    getch();
}