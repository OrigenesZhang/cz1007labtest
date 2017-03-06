#include <stdio.h>
#define SIZE 20
int rCountArray(int array[], int n, int a);
int main(){
    int array[SIZE];
    int index, count, target, size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);
    printf("Enter the target: \n");
    scanf("%d", &target);
    count = rCountArray(array, size, target);
    printf("rCountArray(): %d\n", count);
    return 0;
}
int rCountArray(int array[], int n, int a){
    return n?rCountArray(array+1, n-1, a)+(array[0]==a):0;
}
