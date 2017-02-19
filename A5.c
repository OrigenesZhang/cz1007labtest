#include <stdio.h>
int countOddDigits1(int num);
void countOddDigits2(int num, int *result);
int main(){
    int number, result=-1;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("countOddDigits1(): %d\n", countOddDigits1(number));
    countOddDigits2(number, &result);
    printf("countOddDigits2(): %d\n", result);
    return 0;
}
int countOddDigits1(int num){
    int tot=0;
    while(num){
        if((num%10)&1) tot++;
        num/=10;
    }
    return tot;
}
void countOddDigits2(int num, int *result){
    (*result)=0;
    while(num){
        (*result)+=(num%10)&1;
        num/=10;
    }
}
//The first set of sample I/O is wrong (the program should output 3 instead of 4);
