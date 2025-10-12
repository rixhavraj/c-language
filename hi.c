#include <stdio.h>

int main(){
float a, b;
char x;
printf("enter any no. in a = ");
scanf("%f", &a);
printf("enter any no. in b = ");
scanf("%f", &b);
printf("enter any operator like +, -, *, / = ");
scanf(" %c", &x);

switch (x){
    case '+':
    printf("%f+%f=%f",a,b, a+b);
    break;
    case '-':
    printf("%f-%f=%f",a,b, a-b);
    break;
    case '*':
    printf("%f*%f=%f",a,b, a*b);
    break;
    case '/':
    printf("%f/%f=%f",a,b, a/b);
    break;
    default:
    printf("enter valid operator ");
}
    return 0;
}