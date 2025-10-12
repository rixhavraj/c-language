#include <stdio.h>

/*int main(){
    int a(int s);
    printf("enter any number=");
    scanf("%d", &a);
    if(a>=0 || a<=5 );
    return=s*a(s-1);


}
*/
int main(){
    int n, a=0, b=1, c;
    printf("enter any number=  ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
    c=a+b;
    a=b;
    b=c;
    printf("%d\n", a);
    }
    return 0;
}