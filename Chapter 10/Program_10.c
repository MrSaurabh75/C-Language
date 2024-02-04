// Best Practice
//  Check if a file exists before reading from it.
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("text.txt","r");
//     if(fptr == NULL){
//         printf("File doesn't exists");
//     }
//     else{
//         fclose(fptr);
//     }
// }

// Read data from file.
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     FILE *fint;
    // Read a file
//     char ch;
//     int a;

//     fptr=fopen("textDemo.txt","r");
//     fint=fopen("integer.txt","r");

//    for(int i=0;i<7;i++){
//      fscanf(fptr,"%c",&ch);
//      printf("%c",ch);
//    }
//    printf("\n");
//    for(int i=0;i<2;i++){
//     fscanf(fint,"%d",&a);
//     printf("%d\n",a);
//    }
    // Write a file : Erases the data present in a file and write a new data
    // fptr=fopen("textDemo.txt","w");
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');

    // Appending a data
    // fptr=fopen("textDemo.txt","a");
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');
// }

// Practice Qs 61
// Make a program to read 5 integers from a file
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("integer.txt","r");
//     int a;
//     for(int i=0;i<5;i++){
//         fscanf(fptr,"%d",&a);
//         printf("%d",a);
//     }
// }

// Practice Qs 62
// // Make a program to input student infoormation from a user & enter it to a file.
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("textDemo.txt","w");
//     char name[100];
//     int roll;
//     float cgpa;

//     printf("Enter Your Name : ");
//     scanf("%s",name);
//     printf("Enter Your Roll No. : ");
//     scanf("%d",&roll);
//     printf("Enter Your Name : ");
//     scanf("%.2f",&cgpa);

//     fprintf(fptr,"Name : %s\n",name);
//     fprintf(fptr,"Roll No. :%d\n",roll);
//     fprintf(fptr,"CGPA: %.2f\n",cgpa);
// }

// Practice Qs 63
// Write a program to write all the odd numbers from 1 to n in the file.
// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("integer.txt","w");
//     int u;
//     printf("Enter a Number : ");
//     scanf("%d",&u);

//     for(int i=0;i<=u;i++){
//         if(i%2!=0){
//             fprintf(fptr,"%d\n",i);
//         }
//     }
// }

// Practice Qs 64
// 2 numbers - a & b, are written in a file. write a program to replace them with their sum