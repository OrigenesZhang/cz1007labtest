#include <stdio.h>
int rCountZeros1(int num);
int main(){
    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountZeros1(): %d\n", rCountZeros1(number));
    return 0;
}
int rCountZeros1(int num){
    if(!(num/10)) return num%10==0;
    return rCountZeros1(num/10)+(num%10==0);
}
