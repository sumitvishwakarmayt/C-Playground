
main()
{
    int a[5];
    printf("Simple program to Create Numeric  Array Using for Loop. \n\n");
    printf("Enter the number of 5 Subjects sequencely:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\nThe entered Marks are as follows: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }

    getch();
}