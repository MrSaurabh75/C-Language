// Dynamic Memory Allocation
// Itis a way to allocate memory to a data structure during runtime.
// We need some functions to allocate & free memory dynamically.
// Functions for DMA : malloc(), calloc(), free(), realloc().

// malloc(): takes number of bytes to be allocated % returns a pointer of type void 
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr = (int *) malloc(5*sizeof(int));
//     ptr[0]=1;
//     ptr[1]=2;
//     ptr[2]=3;
//     ptr[3]=4;
//     ptr[4]=5;
//     for(int i=0;i<5;i++){
//         printf("%d\n",ptr[i]);
//     }

// }

// calloc(): allocates a memory in a continous from, initialize with 0
#include<stdio.h>
#include<stdlib.h>
int main(){
     float *ptr;
     ptr = (float *) calloc(5, sizeof(float));
     for(int i=0;i<5;i++){
        printf("%.2f\n",ptr[i]);
     }
}