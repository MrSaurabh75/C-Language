// Practice Qs 65
// WAP to allocate memory to store 5 prices.
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     float *ptr;
//     ptr = (float *) malloc(5 * sizeof(float));
//     ptr[0]=23;
//     ptr[1]=26;
//     ptr[2]=35;
//     ptr[3]=45;
//     ptr[4]=3;
//     for(int i=0;i<5;i++){
//         printf("%.2f\n",ptr[i]);
//     }
// }

// Practice Qs 66
// WAP to allocate memory of size n, where n is entered by the user.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int u;
//     printf("Enter a number : ");
//     scanf("%d",&u);
//     ptr = (int *) calloc(u,sizeof(int));
//     for(int i=0;i<5;i++){
//         printf("%d\n",ptr[i]);
//     }
// }