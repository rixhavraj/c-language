/*#include<stdio.h>
int main()
{
    int i=1;
    for(;;)
    {
        printf("%d", i);
        if (i=5)
        break;
    }
    return 0;
} */

    #include <stdio.h>

int main() {
    int i, j;

    // Upper part of the heart
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            // Conditions to print the upper part of the heart
            if ((i == 0 && (j == 1 || j == 5)) || (i == 1 && (j == 0 || j == 2 || j == 4 || j == 6)) || 
                (i == 2 && (j == 0 || j == 6))) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    // Lower part of the heart
    for (i = 0; i < 7; i++) {
        for (j = 0; j <= 12; j++) {
            // Conditions to print the lower triangle part of the heart
            if (j >= i && j <= 12 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
