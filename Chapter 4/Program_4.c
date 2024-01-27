// Practice Qs 13
// Print the numbers from 0 to 10 with for,while,do-while Loop
// #include<stdio.h>
// int main(){
//     for(int i=0;i<=10;i++){
//         printf("%d\n",i);
//     }

//     int i=0;
//     while(i<=10){
//         printf("%d\n",i);
//         i++;
//     }
//     int j=0;
//     do{
//         printf("%d\n",j);
//         j++;
//     }while(j<=10);
// }

// Practice Qs 14
// Print the numbers from  0 to n, n is given by user
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("%d\n",i);
//     }
//     int i=0;
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
//     int j=0;
//     do{
//         printf("%d\n",j);
//         j++;
//     }while(j<=n);
// }

// Practice Qs 15
// Print the sum of 1st n Natural numbers
// Also print them in reverse
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("Sum of 1st %d numbers is %d\n",n,sum);

//     printf("Numbers in Reverse\n");
//     for(int i=n;i>0;i--){
//         printf("%d\n",i);
//     }
// }

// Practice Qs 17
// Keep taking numbers as input from user until user enters an odd numbers
// #include<stdio.h>
// int main(){
//     int u;
//     do{
//         printf("Enter Even number : ");
//         scanf("%d\n",&u);
//         printf("%d\n",u);
//         if (u%2!=0)
//         {
//             break;
//         }

//     }while(1);
//     printf("You entered odd number\n");
// }

// Practice Qs 18
// Keep takinh numbers as input from user until user enters a numbers which is multiple of 7
// #include <stdio.h>
// int main()
// {
//     int u;
//     do
//     {
//         printf("Enter a number to check it mul of 7 or not :");
//         scanf("%d",&u);
//         if(u%7!=0){
//             break;
//         }
//     }while(1);
//     printf("Your number is not mul of 7");
// }

// Practice Qs 20
// Print all the odd numbers from 5 to 50
// #include<stdio.h>
// int main(){
//     for(int i=5;i<=50;i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//     }
// }

// Practice Qs 21
// Print factorial of a numbers n
// #include<stdio.h>
// int main(){
//     int a;
//     int fact =1;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     for(int i = 1;i<=a;i++){
//         fact = fact*i;
//     }
//     printf("%d",fact);
// }

// Practice Qs 22
// Print reverse of the table for a number n
// #include<stdio.h>
// int main(){
//     int t;
//     printf("Enter a number : ");
//     scanf("%d",&t);
//     for(int i=10;i>=1;i--){
//         printf("%d X %d = %d\n",t,i,(t*i));
//     }
// }

// Practice Qs 23
// Calculate the sum of all numbers between 5 to 50
// #include<stdio.h>
// int main(){
//     int sum = 0;
//     for(int i = 5;i<=50;i++){
//         sum+=i;
//     }
//     printf("%d",sum);
// }

// Print This pattern using nested loops
// *****
// *****
// *****
// *****
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=4;j>=0;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

