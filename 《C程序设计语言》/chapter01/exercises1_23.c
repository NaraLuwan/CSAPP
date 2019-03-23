// 习题1-23:编写一个删除C语言程序中所有的注释语句。要正确处理带银行的字符串与字符常量。在C语言中，注释不允许嵌套。

#include <stdio.h>

void rcomment(int c);
void in_comment(void);
void echo_quote(int c);
int main(){
    int c;
    while((c=getchar())!=EOF)
        rcomment(c);
    return 0;
}
void rcomment(int c){
    int d;
    if(c=='/')
        if((d=getchar())=='*')
            in_comment();
        else if(d=='/'){
            putchar(c);
            rcomment(d);
        }
        else{
            putchar(c);
            putchar(d);
        }
    else if(c=='\''||c=='"')
        echo_quote(c);
    else
        putchar(c);
}
void in_comment(void){
    int c,d;
    c=getchar();
    d=getchar();
    while(c!='*'||d!='/'){
        c=d;
        d=getchar();
    }
}
void echo_quote(int c){
    int d;
    putchar(c);
    while((d=getchar())!=c){
        putchar(d);
        if(d=='\\')
            putchar(getchar());
    }
    putchar(d);
}