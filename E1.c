#include <stdio.h>
int rDigitValue1(int num, int k);
int main(){
    int k;
    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the position: \n");
    scanf("%d", &k);
    printf("rDigitValue1(): %d\n", rDigitValue1(number, k));
    return 0;
}
int rDigitValue1(int num, int k){
    return k==1?num%10:rDigitValue1(num/10, k-1);
}
