#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
    char name[20];
    char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
int main(){
    PhoneBk s[MAX];
    char t[20];
    int size;
    size = readin(s);
    printf("Enter search name: \n");
    gets(t);
    search(s,size,t);
    return 0;
}
int readin(PhoneBk *p){
    int cur=0;
    printf("Enter name:\n");
    while(gets(p[cur].name)){
        if(p[cur].name[0]=='#'){
            p[cur++].name[0]='\0';
            return cur;
        }
        printf("Enter tel:\n");
        gets(p[cur++].telno);
        printf("Enter name:\n");
    }
}
void search(PhoneBk *p, int size, char *target){
    int i, sz=strlen(target);
    for(i=0; i<size; i++){
        if(strlen(p[i].name)!=sz) continue;
        if(!memcmp(p[i].name, target, sizeof(target))){
            printf("Name = %s, Tel = %s\n", p[i].name, p[i].telno);
            return;
        }
    }
    printf("Name not found!\n");
}
