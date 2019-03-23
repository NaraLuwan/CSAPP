#include <stdio.h>

int main(){
    int c,nl,nw,nc,flag;
    flag=0;
    nl=nw=nc=0;
    while((c=getchar())!=EOF){
        ++nc;
        if(c=='\n')
            nl++;
        if(c==' '||c=='\n'||c=='\t')
            flag=0;
        else if(!flag){
            flag=1;
            ++nw;
        }
    }
    printf("%3d %3d %3d\n",nl,nw,nc);
    return 0;
}