#include <stdio.h>
int main(){
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("enter matrics for a= ");
for(i=0; i<3; i++){
    printf("\n");
    for(j=0; j<3; j++){
        scanf("%d", &a[i][j]);
        printf("%d", a[i][j]);
    }
}

printf("\n enter the matrics for b= ");
for(i=0; i<3; i++){
    printf("\n");
    for(j=0; j<3; j++){
        scanf("%d", &b[i][j]);
        printf("%d", b[i][j]);
    }
}
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        c[i][j]= a[i][j] + b[i][j];
    }
}
printf("\nThe sum of the matric a and b is :");
for(i=0; i<3; i++){
    printf("\n");
    for(j=0; j<3; j++){
        printf("%d+%d = %d, \t", a[i][j], b[i][j], c[i][j]);

    }
}
return 0;

}
