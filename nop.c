/* #include <stdio.h>
int main(){
    int a,b,c;
    printf("enter any value = ");
    scanf(" %d %d %d",&a,&b,&c);
    if(a>b&c){
    printf("a is grater of all");}
    else if(b>a&c);{
    printf("b is greater");}
    else if(c>a&b);
    return 0;
}
*/ 
/*#include <stdio.h>
int main(){ 
    int i=77;
    for(i=1; i<=10; i++){
        if (i==5)
        continue;
    }
    printf("%d\n", i);
    return 0;
} 

#include <stdio.h>
int main(){
    int marks[5]={10, 20, 30, 40, 50}, i, sum=0;
    float avg;
    for (i=0; i<5; i++){
        sum=sum+marks[i];}
        printf("%d\n", sum );
        avg=sum/5.0;
        printf("%f\n", avg);
    return 0;
}
*/

#include <stdio.h>
int main(){
    int A[3][3], B[3][3],d[3][3];
    int i,j,k;
    printf("Enter the 1st matrics= ");
    printf("\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter 2nd martics= ");
    printf("\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
        d[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
            for(k=0; k<3; k++){
            printf("%d", d[i][j]);
            }
            }
        }
    return 0;
        }