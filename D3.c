#include <stdio.h>
typedef struct {
    char source;
    char code;
} Rule;
void encodeChar(Rule table[5], char *s, char *t);
int main(){
    char s[80],t[80];
    Rule table[5] = {'a','d', 'b','z', 'z','a', 'd','b', '\0','\0' };
    printf("Source string: \n");
    scanf("%s", s);
    encodeChar(table,s,t);
    printf("Encoded string: %s\n", t);
    return 0;
}
void encodeChar(Rule table[5], char *s, char *t){
    int cur=-1, i;
    while(s[++cur]!='\0'){
        for(i=0; i<4; i++)
            if(s[cur]==table[i].source){
                t[cur]=table[i].code;
                goto label;
            }
        t[cur]=s[cur];
        label:;
    }
    t[cur]='\0';
}
