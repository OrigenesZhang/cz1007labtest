#include <stdio.h>
typedef struct {
float operand1, operand2;
char op;
} bexpression;
float compute1(bexpression expr);
float compute2(bexpression *expr);
int main(){
    bexpression e;
    printf("Enter expression (op1 op2 op): \n");
    scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
    printf("compute1(): %.2f\n", compute1(e));
    printf("compute2(): %.2f\n", compute2(&e));
    return 0;
}
float compute1(bexpression expr){
    if(expr.op=='+') return expr.operand1+expr.operand2;
    if(expr.op=='-') return expr.operand1-expr.operand2;
    if(expr.op=='*') return expr.operand1*expr.operand2;
    return expr.operand1/expr.operand2;
}
float compute2(bexpression *expr){
    if((*expr).op=='+') return (*expr).operand1+(*expr).operand2;
    if((*expr).op=='-') return (*expr).operand1-(*expr).operand2;
    if((*expr).op=='*') return (*expr).operand1*(*expr).operand2;
    return (*expr).operand1/(*expr).operand2;
}
