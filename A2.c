#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);
int main(){
    int number, digit, result=-1;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    printf("digitPos1(): %d\n", digitPos1(number, digit));
    digitPos2(number, digit, &result);
    printf("digitPos2(): %d\n", result);
    return 0;
}
int digitPos1(int num, int digit){
    int cnt=1;
    while(num){
        if(num%10==digit) return cnt;
        num/=10;
        cnt++;
    }
    return 0;
}
void digitPos2(int num, int digit, int *result){
    (*result)=1;
    while(num){
        if(num%10==digit) return;
        num/=10;
        (*result)++;
    }
    (*result)=0;
}
