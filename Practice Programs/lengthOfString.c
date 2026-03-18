main(){
    printf("Program to find length of Entered String.\n");
    
    char s[1000];

    scanf("\nEnter the String to Check: %s", s);

    // for(int i=0; s[i]!='\0'; i++);

    // printf("%d", i); //error because i defined only inside for loop scope.
    // getch();



    int i;
    for(i=0; s[i]!='\0'; i++);

    printf("The size of the string is %d", i);

    getch();
}