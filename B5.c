#include <stdio.h>
int minOfMax(int ar[4][4]);
int main(){
    int ar[4][4],row,col,min;
    printf("Enter the matrix (4x4) row by row: \n");
    for (row=0; row<4; row++)
        for (col=0; col<4; col++)
            scanf("%d", &ar[row][col]);
    min=minOfMax(ar);
    printf("minOfMax(): %d\n", min);
    return 0;
}
int minOfMax(int ar[4][4]){
    int i, j, min;
    for(i=0; i<4; i++){
        int max=ar[i][0];
        for(j=1; j<4; j++)
            if(ar[i][j]>max) max=ar[i][j];
        min=i?(min>max?max:min):max;
    }
    return min;
}
