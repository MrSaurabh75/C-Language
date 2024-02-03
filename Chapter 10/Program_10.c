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
#include<stdio.h>
int main(){
    FILE *fptr;
    // Read a file
    char ch;
    fptr=fopen("textDemo.txt","r");
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("character = %c\n",ch);
    
    // Write in File
    // fptr=fopen("textDemo.txt","w");
    // fprintf(fptr,"%c\n",'S');
    // fprintf(fptr,"%c\n",'A');
    // fprintf(fptr,"%c\n",'U');
    // fprintf(fptr,"%c\n",'R');
    // fprintf(fptr,"%c\n",'A');
    // fprintf(fptr,"%c\n",'B');
    // fprintf(fptr,"%c\n",'H');

    // Read & Write a char
    // printf("%c\n",fgetc(fptr));
    fputc('L',fptr);

    fclose(fptr);
}