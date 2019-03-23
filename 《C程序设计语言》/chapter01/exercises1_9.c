// 编写一个将输入复制到输出的程序，并将其中连续的多个空格使用一个空格代替

#include <stdio.h>

int main(){
    int c;
    int nb;
    int prec=-1;
    while((c=getchar())!=EOF){
        if(c==' '&&prec==' ')
            continue;
        else
        {
            putchar(c);
            prec=c;
        }
    }
}