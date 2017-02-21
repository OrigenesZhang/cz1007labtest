#include <stdio.h>
#define SIZE 3
void swap2Rows(int ar[SIZE][SIZE], int r1, int r2);
void swap2Cols(int ar[SIZE][SIZE], int c1, int c2);
void display(int ar[SIZE][SIZE]);
int main(){
    int array[SIZE][SIZE];
    int row1, row2, col1, col2;
    int i,j;
    printf("Enter the matrix (3x3) row by row: \n");
    for (i=0; i<SIZE; i++)
        for (j=0; j<SIZE; j++)
            scanf("%d", &array[i][j]);
    printf("Enter two rows for swapping: \n");
    scanf("%d %d", &row1, &row2);
    swap2Rows(array, row1, row2);
    printf("The new array is: \n");
    display(array);
    printf("Enter two columns for swapping: \n");
    scanf("%d %d", &col1, &col2);
    swap2Cols(array, col1, col2);
    printf("The new array is: \n");
    display(array);
    return 0;
}
void display(int M[SIZE][SIZE]){
    int l,m;
    for (l = 0; l < 3; l++) {
        for (m = 0; m < 3; m++)
            printf("%d ", M[l][m]);
        printf("\n");
    }
    printf("\n");
}
void swap2Rows(int M[SIZE][SIZE], int r1, int r2){
    int i, t;
    for(i=0; i<SIZE; i++)
        t=M[r1][i], M[r1][i]=M[r2][i], M[r2][i]=t;
}
void swap2Cols(int M[SIZE][SIZE], int c1, int c2){
    int i, t;
    for(i=0; i<SIZE; i++)
        t=M[i][c1], M[i][c1]=M[i][c2], M[i][c2]=t;
}
