// 习题2-3：编写函数htoi(s)，把由十六进制数字组成的字符串（包含可选的前缀0x或0X）转换为与之等价的整型数。字符串中允许包含的数字包括：0～9，a～f以及A-F

#include <stdio.h>
#include <stdlib.h>
#define YES 1
#define NO 0
int htoi(char s[]){
    int hexd,i,inhex,n;
    i=0;
    if(s[i]=='0'){
        ++i;
        if(s[i]=='x'||s[i]=='X')
            ++i;
    }
    n=0;
    inhex=YES;
    while(inhex){
        if(s[i]>='0'&&s[i]<='9')
            hexd=s[i]-'0';
        else if(s[i]>='a'&&s[i]<='f')
            hexd=s[i]-'a'+10;
        else if(s[i]>='A'&&s[i]<='F')
            hexd=s[i]-'A'+10;
        else
            inhex=NO;
        if(inhex==YES)
            n=16*n+hexd;
        i++;
    }
    return n;
}
int main(){
    int count=10;
    int i;
    char s[100];
    for(i=0;i<10;i++){
        int num=rand()%10000;
        int n;
        sprintf(s,"%#0x",num);
        n=htoi(s);
        printf("%#0x %s %d %d \n",num,s,num,n);

    }

}