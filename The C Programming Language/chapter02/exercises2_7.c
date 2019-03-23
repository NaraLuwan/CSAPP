// 习题2-7:编写一个函数invert(x,p,n),该函数返回对x执行下列操作后的结果：将x中从第p位开始的n个位求反，x的其余位保持不变。

void any(char s1[],char s2[]){
    int i,j;
    for(i=0;s1[i]!='\0';i++)
        for(j=0;s2[j]!='\0';j++)
            if(s1[i]==s2[j])
                return i;
    return -1;
}