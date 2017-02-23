//The behaviour of the function is undefined in the problem statement when one of the strings is a prefix of the other;
#include <stdio.h>
int compareStr(char *s, char *t);
int main(){
    char a[80], b[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    printf("compareStr(): %d\n", compareStr(a,b));
    return 0;
}
int compareStr(char *s, char *t){
    int cur=-1;
    while(s[++cur]!='\0'&&t[cur]!='\0')
        if(s[cur]!=t[cur]) return s[cur]-t[cur];
    return 0;
}
