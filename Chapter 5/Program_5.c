// Practice Qs 27
// Write a functions - one to print "Hello" & second to print "Good Bye"
// #include<stdio.h>
// void one();
// void second();
// int main(){
//     one();
//     second();
// }
// void one(){
//     printf("Hello\n");
// }
// void second(){
//     printf("Good Bye!\n");
// }

// Practice Qs 28
// Write a function that prints Namaste if user is indian & Bonjour if the user is french
// #include<stdio.h>
// void Indian();
// void French();
// int main(){
//     char i;
//     printf("Enter your city i for India & f for french: \n ");
//     scanf("%c",&i);
//     if(i=='i'){
//         Indian();
//     }
//     else if(i=='f'){
//         French();
//     }
//     else{
//         printf("Please enter as per instructions");
//     }
// }
// void Indian(){
//     printf("Namaste");
// }
// void French(){
//     printf("Bonjour");
// }

// Practice Qs 29
// Use library function to calculate the square of a given number.
// #include<stdio.h>
// int square(int a){
//     return pow(a,2);
// }
// int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d",&x);
//     int s = square(x);
//     printf("Square of %d is %d ",x,s);
// }

// Practice Qs 31
// Write a function to calculate area of square, a circle & a rectangle.
// #include<stdio.h>
// int areaOfSquare(int s);
// float areaOfCircle(int x);
// int areaOfRectangle(int a,int b);
// int main(){
//     int radius,len,bre,side;
//     printf("Enter side of a square : ");
//     scanf("%d",&side);
//     printf("Enter radius of a circle : ");
//     scanf("%d",&radius);
//     printf("Enter Height of a rectangle : ");
//     scanf("%d",&len);
//     printf("Enter Breadth of a rectangle : ");
//     scanf("%d",&bre);

//     float ac = areaOfCircle(radius);
//     int ar = areaOfRectangle(len,bre);
//     int as = areaOfSquare(side);

//     printf("Area of a square whose side is %d is %d\n",side,as);
//     printf("Area of a circle whose radius is %d is %f\n",radius,ac);
//     printf("Area of a rectangle whose height is %d and breadth is %d is %d \n",len,bre,ar);

// }
// int areaOfSquare(int s){
//     return s*s;
// }
// float areaOfCircle(int x){
//     return 3.14*x*x;
// }
// int areaOfRectangle(int a,int b){
//     return a*b;
// }

// Practice Qs 32
// Print "Hello world " 5 times using recursion.
// #include<stdio.h>
// void printHW(int count);
// int main(){
//     int c;
//     printf("Enter a number : ");
//     scanf("%d",&c);
//     printHW(c);
// }
// void printHW(int count){
//     if(count==0){
//         return;
//     }
//     printf("Hello World!\n");
//     printHW(count-1);
// }

// Practice Qs 30
// Sum of first n natural numbers.
// #include<stdio.h>
// int sum(int a);
// int main(){
//     int s;
//     printf("Enter a number : ");
//     scanf("%d",&s);
//     int addition = sum(s);
//     printf("The sum of first %d numbers is %d",s,addition);
// }
// int sum(int a){
//     if(a==0){
//         return 0;
//     }
//     else if(a==1){
//         return 1;
//     }
//     return a+sum(a-1);
// }

// Practice Qs 31
// Factorial of numbers 
// #include<stdio.h>
// int factorial(int f);
// int main(){
//     int n,fact;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     fact=factorial(n);
//     printf("Factorial of %d is %d",n,fact);
// }
// int factorial(int f){
//     if(f==0 || f==1){
//         return 1;
//     }
//     return  f*factorial(f-1);
// }