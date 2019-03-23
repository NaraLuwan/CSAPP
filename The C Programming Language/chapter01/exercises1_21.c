// 习题1-21:编写程序entab，将空格串替换为最少数量的制表符和空格，但要保持单词之间的间隔不变。假设制表符终止位的位置与练习1-20的detab程序的情况相同。当使用一个制表符或者一个空格都可以到达下一个制表符终止位时，选用那种替换字符比较好？

#include <stdio.h>
#define TABINC 8
int main(){
    int c,nb,nt,pos;
    nb=0;
    nt=0;
    pos=1;
    while((c=getchar())!=EOF){
        if(c==' '){
            if(pos%TABINC!=0)
                ++nb;
            else{
                nb=0;
                nt++;
            }
        }
        else{
            while(nt>0){
                putchar('\t');
                nt--;
            }
            if(c=='\t')
                nb=0;
            else
                while(nb>0){
                    putchar(' ');
                    nb--;
                }
            putchar(c);
            if(c=='\n')
                pos=0;
            else if(c=='\t')
                pos=pos+(TABINC-(pos-1)%TABINC)-1;
        }

        pos++;
    }
}