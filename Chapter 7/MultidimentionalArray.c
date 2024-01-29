// Multidimentional Array 
// 2 D Arrays
#include<stdio.h>
int main(){
    int Marks[4][4];
    Marks[0][0]=90;
    Marks[0][1]=100;
    Marks[0][2]=89;
    Marks[0][3]=80;

    Marks[1][0]=40;
    Marks[1][1]=950;
    Marks[1][2]=960;
    Marks[1][3]=70;

    Marks[2][0]=90;
    Marks[2][1]=100;
    Marks[2][2]=89;
    Marks[2][3]=80;

    Marks[3][0]=40;
    Marks[3][1]=950;
    Marks[3][2]=960;
    Marks[3][3]=70;

    for(int i = 0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Marks[%d][%d] is %d\n",i,j,Marks[i][j]);
        }
    }
}