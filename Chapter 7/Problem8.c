// Q7. WAP in C to perform all the arithmetic operation of two integer, like 1: Addition, 2:
// Subtraction, 3: Multiplication, 4: Division, 5: Modules using switch case.

#include <stdio.h>

int main(){
    int number1,number2;
    char operator;
    printf("Enter an Operator like + , - , / , * and % : ");
    scanf("%c" ,&operator);

    printf("Type the First number : ");
    scanf("%d",&number1);

    printf("Type the Second number : ");
    scanf("%d",&number2);

    switch (operator)
    {
    case '+' :
        printf("The addition of two number is : %d" , number1 + number2);
        break;

    case '-' :
        printf("The sub of two number is : %d" , number1 - number2);
        break;

    case '*' :
        printf("The product of two number is : %d" , number1 * number2);
        break;

    case '/' :
        printf("Divisio of two number is : %d" , number1 / number2);
        break;
        
    case '%' :
        printf("Modulo of two number is : %d" , number1 % number2);
        break;
    }
    return 0;
}