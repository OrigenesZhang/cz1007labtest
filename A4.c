#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main(){
    int x,y,result;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);
    printf("gcd1(): %d\n", gcd1(x, y));
    gcd2(x,y,&result);
    printf("gcd2(): %d\n", result);
    return 0;
}
int gcd1(int num1, int num2){
    return (!num2)?num1:gcd1(num2, num1%num2);
}
void gcd2(int num1, int num2, int *result){
    (!num2)?(*result)=num1:gcd2(num2, num1%num2, result);
}
