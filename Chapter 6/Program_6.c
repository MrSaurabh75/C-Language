//  Practice Qs 37
// Print the value of 'i' from its pointer to pointer
// #include<stdio.h>
// int main(){
//     int i = 23;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d",**pptr);
// }

// Practice Qs 38
// Swap two numbers a & b;
// #include<stdio.h>
// void swap(int *x,int *y);
// int main(){
//     int a=3;
//     int b=4;
//     swap(&a,&b);
//     printf("a = %d,b = %d",a,b);
// }
// void swap(int *x,int *y){
//     int temp = *x; 
//     *x = *y; 
//     *y = temp; 
// }

// Practice Qs 40
// Write a function to calculate the sum, product & average of 2 numbers. Print that avrage in the main function.
// #include<stdio.h>
// void sPA(int a,int b,int *s,int *p,int *avg);
// int main(){
//     int x=10;
//     int y=30;
//     int s,p,avg;
//     sPA(x,y,&s,&p,&avg);
//     printf("Sum of %d and %d is %d\n",x,y,s);
//     printf("Product of %d and %d is %d\n",x,y,p);
//     printf("Avrage of %d and %d is %d\n",x,y,avg);
// }
// void sPA(int a,int b,int *s,int *p,int *avg){
//     *s = a + b;
//     *p = a * b;
//     *avg = *s/2;

// }