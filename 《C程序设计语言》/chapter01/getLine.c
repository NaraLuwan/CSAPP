// 读入一组文本，打印出最长的一行

#include <stdio.h>

int getline_(char s[],int lim){
    int c,i;
    i=0;
    while(i<lim-1&&(c=getchar())!=EOF&&c!='\n'){
        s[i++]=c;
    }
    if(c==EOF&&i==0)
        return -1;
    if(c=='\n')
        s[i++]=c;
    s[i++]='\0';
    return i;
}
void copy(char str1[],char str2[]){
    while((*str1++=*str2++)!='\0');

}
int main(){
    char line[256];
    char longest[256];
    char shortest[256];
    int len;
    int max=0,min=256;
    while((len=getline_(line,256))>-1){
        if(len>=max)
        {
            max=len;
            copy(longest,line);
        }
        else if(len<=min)
        {
            min=len;
            copy(shortest,line);
        }
    }
    if(max>0)
        printf("%d:%s",max,longest);
    if(min<256)
        printf("%d:%s",min,shortest);
    return 0;
}