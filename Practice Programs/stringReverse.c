main()
{
    printf("Program to find reverse of a String.\n");
    char s[100];

    printf("Enter a String to Reverse:");
    scanf("%s", s);

    char revString[100];
    int i;

    int len= strlen(s); // recommended to store length out of loop for loop efficiency otherwise loop calculates strlen everytime it runs.

    for (i = 0; i<len; i++)
    {
        revString[i] = s[strlen(s)-1 - i];
    }

    revString[i] = '\0';
    printf("Reversed String is %s", revString);
}