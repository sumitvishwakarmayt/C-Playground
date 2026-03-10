main()
{
    int a, b;
    printf("Enter the number of rows:");
    scanf("%d", &a);
    printf("Enter the number of columns:");
    scanf("%d", &b);

    int m[a][b];

    printf("Enter the elements to insert in the Matrix i.e. 2D Array Sequentially:");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &m[a][b]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d", m[a][b]);
        }
    }

    getch();
}