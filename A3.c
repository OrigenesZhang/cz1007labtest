#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main(){
    int power;
    float number, result;
    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number,power,&result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p){
    if(p==0) return 1;
    if(p<0) p=-p, num=1/num;
    int i;
    double res=1;
    for(i=0; i<p; i++)
        res*=num;
    return res;
}
void power2(float num, int p, float *result){
    (*result)=1;
    if(p<0) p=-p, num=1/num;
    int i;
    for(i=0; i<p; i++)
        (*result)*=num;
}
