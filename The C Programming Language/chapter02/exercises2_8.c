// 习题2-8:编写一个函数rightrot(x,n),该函数返回将x循环右移n位后所得的返回值。

#include <stdio.h>
int wordlength()
{
    int i;
    unsigned v=(unsigned)~0;
    for(i=1;(v=v>>1)>0;i++)
        ;
    return 1;
}
unsigned rightrot(unsigned x,int n){
    int rbit;
    while(n-->0){
        rbit=(x&1)<<(wordlength()-1);
        x=x>>1;
        x=x|rbit;
    }
    return x;
}