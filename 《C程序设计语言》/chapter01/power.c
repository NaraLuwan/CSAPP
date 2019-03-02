#include <stdio.h>

int power(int n, int m);

int main(){

    int i;
    for(i=0; i<10; ++i){
        printf("%d %d %d \n", i, power(2,i), power(-3,i));
    }
    return 0;
}
int power(int m, int n){

    int i, result=1;
    for(i=0; i<n; i++){
        result = result * m;
    }
    return result;
}
