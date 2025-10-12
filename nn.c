#include <stdio.h>
int main(){
    int arr[3]= {1,42,69};
    int what = *(&((0*40-64)[&(&(3[arr]))[-2]])-(-1));
    printf("%d\n", what);
    return 0;
}