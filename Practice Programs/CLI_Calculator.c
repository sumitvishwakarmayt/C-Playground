#include <stdio.h>

int main() {
    int a, b;
    char op;
    int res;
    printf("Enter the numbers:\n");
    scanf("%d%d", &a, &b);
    printf("Enter + to add. \n Enter - to subtract. \n Enter * to Multiply. \n Enter / to Divide. \n");
	scanf("%c", &op);
    scanf("%c", &op);
    if (op == '+'){
        printf("The sum is: %d", a+b);
    }
    else if (op == '-'){
        printf("The subtraction is: %d", a-b);
    }
    else if (op == '*'){
        printf("The multiplication is: %d", a*b);
    }
    else{
        printf("The division is: %d", a/b);
    }
    getchar();
    getchar();
    return 0;
}