#include <stdio.h>
int main(){

    int a;
    printf("enter any number=");
    scanf("%d",&a);
    char c;
     printf("enter + ,-, *, /= ");
     scanf(" %c",&c);
     int b;
    printf("enter any number=");
    scanf("%d",&b);

    switch(c){
        case '+':
        printf("%d+%d=%d", a,b, a+b);
        break;
        case '-':
        printf("%d-%d=%d", a,b, a-b);
        break;
        case '*':
            printf("%d*%d=%d", a,b, a*b);
            break;
        case'/':
        printf("%d/%d=%d", a,b, a/b);
        break;
        default:
        printf("error found");

    }
    return 0;

    }