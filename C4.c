#include <stdio.h>
#include <string.h>
#define SIZE 10
int findTarget(char *target, char nameptr[SIZE][80], int size);
int main(){
    char nameptr[SIZE][80];
    char t[40];
    int i, result, size;
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d names: \n", size);
    for (i=0; i<size; i++)
        scanf("%s", nameptr[i]);
    printf("Enter target name: \n");
    scanf("\n");
    gets(t);
    result = findTarget(t, nameptr, size);
    printf("findTarget(): %d\n", result);
    return 0;
}
int findTarget(char *target, char nameptr[SIZE][80], int size){
    int i;
    for(i=0; i<size; i++){
        int cur=0;
        while(nameptr[i][cur]!='\0'&&target[cur]!='\0')
            if(nameptr[i][cur]!=target[cur++]) break;
        if(nameptr[i][cur]=='\0'&&target[cur]=='\0') return i;
    }
    return -1;
}
