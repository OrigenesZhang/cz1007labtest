#include <stdio.h>
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main(){
    int number, result=-1;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n",extOddDigits1(number));
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d\n", result);
    return 0;
}
int extOddDigits1(int num){
    int res=0, cur=1;
    while(num){
        int tmp=num%10;
        if(tmp&1) cur*=10, res+=tmp*cur;
        num/=10;
    }
    return res/10;
}
void extOddDigits2(int num, int *result){
    (*result)=0;
    int cur=1;
    while(num){
        int tmp=num%10;
        if(tmp&1) cur*=10, (*result)+=cur*tmp;
        num/=10;
    }
    (*result)/=10;
}
