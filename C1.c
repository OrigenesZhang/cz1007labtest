#include <stdio.h>
void processString(char *str, int *totVowels, int *totDigits);
int main(){
    char str[50];
    int totVowels, totDigits;
    printf("Enter the string: \n");
    gets(str);
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits){
    char vowel[]={'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    int i=-1, j;
    (*totVowels)=0;
    (*totDigits)=0;
    while(str[++i]!='\0'){
        if(str[i]>='0'&&str[i]<='9'){
            (*totDigits)++;
            continue;
        }
        for(j=0; j<10; j++){
            if(str[i]==vowel[j]){
                (*totVowels)++;
                break;
            }
        }
    }
}
