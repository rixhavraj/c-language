/*#include <stdio.h>

int main() {
    int x = 10;  // integer variable
    float y = 20.5;  // floating-point variable
    char z = 'A';  // character variable

    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("z = %c\n", z);

   int number;
    printf("enter the number = ");
    printf("square of: %d",number*number*number);

    while(number){
        printf("%d/n",number);
        number++;
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    int i, j, count, temp, a[25];
    printf("enter number of vaues:");
    scanf("%d", &count);
    printf("enter the elements:");
    for(i=0; i<count; i++){
        scanf("%d", &a[i]);
    }
    for(i=1; i<count; i++){
        temp=a[i];
        j=i-1;
    }
    while((temp<a[j]) & (j>=0)){
        a[j+1]=a[j];
        j=j-1
    }
    a[]
}