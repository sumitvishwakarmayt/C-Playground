main(){
    //There are mainly 5 String Function in C which are as follows along with their usage.

    char s[]="This is a String.";
    char d[]="\0";
    char anotherString[]="This is another string.";

    int len = strlen(s); //Finds out length of the string.

    printf("The length of String S is %d.", len);

    strrev(s); //Reverses the String.
   
    strcpy(d, s); // Copies the second parameter string to first parameter string.

    printf("\nThe reversed String is: %s", d);

    int comparisionResult = strcmp(anotherString, s); // Compares both Strings and Returns 0, 1, -1, after ASCII Subtraction. 0 means equal, 1 means greater, -1 means lesser.

    printf("\nThe comparision result is %d", comparisionResult);

    strcat(s, d); //Concatenates parameter 1 string with parater 2 string.

    printf("The String after concatenation is %s.", s); // #error and won't print concatenation result due to array memory overflow.

    getch();
}