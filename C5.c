#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size);
int main(){
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for (i=0; i<size; i++)
        scanf("%s", word[i]);
    findMinMaxStr(word, first, last, size);
    printf("First word = %s, Last word = %s\n", first, last);
    return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int size){
    memcpy(first, word[0], sizeof(word[0]));
    memcpy(last, word[0], sizeof(word[0]));
    int i, cur, flag;
    for(i=1; i<size; i++){
        cur=-1;
        flag=0;
        while(word[i][++cur]!='\0'&&first[cur]!='\0'){
            if(word[i][cur]<first[cur]){
                flag=1;
                memcpy(first, word[i], sizeof(word[i]));
                break;
            }else if(word[i][cur]>first[cur]) break;
        }
        if(!flag&&first[cur]!='\0'&&word[i][cur]=='\0') flag=1, memcpy(first, word[i], sizeof(word[i]));
        if(!flag){
            cur=-1;
            while(word[i][++cur]!='\0'&&last[cur]!='\0'){
                if(word[i][cur]>last[cur]){
                    flag=1;
                    memcpy(last, word[i], sizeof(word[i]));
                    break;
                }else if(word[i][cur]<last[cur]) break;
            }
            if(!flag&&last[cur]=='\0'&&word[i][cur]!='\0') memcpy(last, word[i], sizeof(word[i]));
        }
    }
}
