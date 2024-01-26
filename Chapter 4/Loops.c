// Loops : for loop, while loop,do-while loop
#include<stdio.h>
int main(){
    int t;
    printf("Enter a number for table : \n");
    scanf("%d",&t);
    printf("Table of %d using For Loop :\n",t);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",t,i,(t*i));
    }

    int tw;
    int i =1;
    printf("Enter a number for table : \n");
    scanf("%d",&tw);
    printf("Table of %d using While Loop :\n",tw);
    while(i<=10){
        printf("%d X %d = %d\n",tw,i,(t*i));
        i++;
    }

    int j=1; 
    int td;
    printf("Enter a number for table : \n");
    scanf("%d",&td);
    printf("Table of %d using Do-While Loop :\n",td);
    do{
        printf("%d X %d = %d\n",td,j,(t*j));
        j++;
    }while(j<=10);
}