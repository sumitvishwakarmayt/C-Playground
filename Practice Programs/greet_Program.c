#include <stdio.h>
void main()
{
    printf("%s", "Mastering Conditional Statements in C\n");
    // printf("%s", "There are 4 Conditionals in :\n");
    // printf("%s", "if -> executes the block when condtion true.\n");
    // printf("%s", "else -> executes the block when condition false.\n");
    // printf("%s", "else if -> exectues if the else block condition false\n");
    // printf("%s", "switch -> provides multiple options to switch to conditions. \n");

    printf("%s", "\nProgram to Print Good Morning, Afternoon, Evening, And GN according to time.");
    float time;
    printf("%s", "\n\nEnter the time in 24 Hours Format:");
    scanf("%f", &time);
    if (time >= 4 && time < 12)
    {
        printf("%s", "Good Morning");
    }
    else if (time > 12 && time < 17)
    {
        printf("%s", "Good Afternoon");
    }
    else if (time > 17 && time <= 24)
    {
        printf("%s", "Good Night\n");
    }
    // We can't put condition in () after else
    else
    {
        printf("%s", "Invalid Time Entered!");
    }
    getchar();
    getchar();
}
