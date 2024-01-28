// Pointers : A variable that stores the memory address of another variable.
// #include<stdio.h>
// int main(){

//     // Declaration of Pointers 

//     int age = 22;
//     int *ptr = &age;
//     int addAge=*ptr;  

//     char ch = 'a';
//     char *ptr2 = &ch;
//     char addCh = *ptr2;

//     float f = 12.45;
//     float *ptr3 = &f;
//     float addF = *ptr3;

//     printf("%d\n",addAge);
//     printf("%c\n",addCh);
//     printf("%.2f\n",addF);

//     // Format Spacifier

//     printf("%p\n",&age);
//     printf("%p\n",ptr);
//     printf("%p\n",addAge);
    
//     printf("%p\n",&ch);
//     printf("%p\n",ptr2);
//     printf("%p\n",addCh);
    
//     printf("%p\n",&f);
//     printf("%p\n",ptr3);
//     printf("%p\n",addF);
    
//     printf("%u\n",&age);
//     printf("%u\n",ptr);
//     printf("%u\n",addAge);
    
//     printf("%u\n",&ch);
//     printf("%u\n",ptr2);
//     printf("%u\n",addCh);
    
//     printf("%u\n",&f);
//     printf("%u\n",ptr3);
//     printf("%u\n",addF);
    
// }

// Pointer To Pointer : A variable that stores the memory address of another pointer.
// #include<stdio.h>
// int main(){
//     int age = 12;
//     int *ptr = &age;
//     int **pptr = &ptr;
//     printf("%u\n",ptr);
//     printf("%u\n",pptr);
// }

// Pointers to Function Call
// Call by Value : We pass value of variable as argument
// Call by Reference : We pass address of variable as argument.
// #include<stdio.h>
// void square(int n);
// void _square(int *n);
// int main(){
//     int number = 2;
//     square(number);
//     _square(&number);
//     printf("%d",number);
// }
// void square(int n){
//     n=n*n;
//     printf("Square of %d\n",n);
// }
// void _square(int *n){
//     *n=*n**n;
//     printf("Square of %d\n",*n);
// }