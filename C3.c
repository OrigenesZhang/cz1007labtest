#include <stdio.h>
char *stringncpy(char *s1, char *s2, int n);
int main(){
    char sourceStr[40] = "source";
    char targetStr[40], *target;
    int length;
    printf("Enter the string: \n");
    gets(sourceStr);
    printf("Enter the number of characters: \n");
    scanf("%d", &length);
    target = stringncpy(targetStr, sourceStr, length);
    printf("stringncpy(): %s\n", target);
    return 0;
}
char *stringncpy(char *s1, char *s2, int n){
    int i=-1;
    while(s2[++i]!='\0'&&i<n)
        s1[i]=s2[i];
    s1[i]='\0';
    return s1;
}
