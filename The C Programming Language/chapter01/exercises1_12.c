// 习题1-12：编写一个程序，以每行一个单词的形式打印其输入

#include <stdio.h>

int main(){
    int c;
    int flag;
    flag=0;
    while((c=getchar())!=EOF){
        if(c==' '||c=='\n'||c=='\t'){
            if(flag){
                putchar('\n');
                flag=0;
            }
        }
        else if(!flag){
            flag=1;
            putchar(c);
        }
        else{
            putchar(c);
        }
    }
}