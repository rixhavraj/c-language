#include <stdio.h>

int main() {
    int t;
    printf("enter the athar's number = ");
    scanf("%d", &t);
    while (t > 0) {
        int a, b, c = 0;
        scanf("%d %d", &a, &b);

        while (a % b != 0){
            int x = a++;
            printf("the value of a after ++ =%d\n", x);

            c++;
            int z =c;
            printf("the value of c is =%d\n", z);
        }

        printf("the answer is %d %s\n", c);
        t--;
    }
    return 0;
}
