// 习题2-9：在求对二的补码时，表达式x&(x-1)可以删除x中最右边为1的一个二进制位。请解释这样做的道理。用这一方法重写bitcount函数， 以加快其执行速度。

#include <stdio.h>
#include <stdlib.h>
#define YES 1
#define NO 0
int bitcount(unsigned x){
    int n=0;
    while(x!=0){
        if(x&0x1)
            n++;
        x>>1;
    }
    return n;
}

int bitcount(unsigned x){
    int b;
    b=0;
    while(x!=0){
        b++;
        x&=x-1;
    }
    return b;
}