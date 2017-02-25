#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main(){
    char str[80],substr[80];
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    printf("countSubstring(): %d\n", countSubstring(str, substr));
    return 0;
}
int countSubstring(char str[], char substr[]){
    int cur=-1, cnt=0, i;
    while(1){
        i=-1;
        while(1){
            if(substr[++i]=='\0'){
                cnt++;
                break;
            }
            if(str[cur+i]=='\0') return cnt;
            if(substr[i]!=str[cur+i]) break;
        }
        cur++;
    }
}
