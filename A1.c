#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main(){
    int number, result=-1;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d\n", numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2(): %d\n", result);
    return 0;
}
int numDigits1(int num){
    int result=0;
    if(num){
        while(num){
            num/=10;
            result++;
        }
    }else return 1;
    return result;
}
void numDigits2(int num, int *result){
    (*result)=1;
    num/=10;
    while(num){
        (*result)++;
        num/=10;
    }
}
