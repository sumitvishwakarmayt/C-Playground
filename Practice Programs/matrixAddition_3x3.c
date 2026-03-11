
//Just a 3x3 Matrix Creation and Addition Program

main()
{
    int m1[3][3], m2[3][3];
    printf("Enter the elements of the Matrix 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nYour Entered Matrix is: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    } 

    printf("\nEnter the elements of Matrix 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\nYour Second Entered Matrix is: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe Addition of these two Matrices is: \n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }

    getch();
}