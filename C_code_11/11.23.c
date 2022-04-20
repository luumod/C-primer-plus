#include <stdio.h>//输入字符串，读到quit结束,或者直接读完10行结束，统计输入的字符串数量
#include <string.h>
#define SIZE 80
#define LIN 10
#define STOP "quit"
char *s_gets(char *str,int n);
int main(void){
    char input[LIN][SIZE];
    int ct=0;

    printf("Enter up to %d  lines (types quit to exit)\n",LIN);
    while (ct<LIN && s_gets(input[ct],SIZE)!=NULL && strcmp(input[ct],STOP)!=0){  
        ct++;
    }
    printf("%d strings entered.\n",ct);
    return 0;
}
char *s_gets(char *str,int n){          //替换空字符与换行符
    int i=0;
    char *ret_val;

    ret_val=fgets(str,n,stdin);
    if (ret_val){
        i=0;
        while (str[i]!='\n'&&str[i]!='\0')
            i++;
        if (str[i]=='\n')
            str[i]='\0';
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}