// File IO : RAM->Volatile memory, Hard Disk->Non-Volatile memory.
// File : File is a container in a storage device to store the data.

// Oprations on a Files
// Create a File.
// Open a File. --> fptr = fopen("filename",mode);
// Close a File.--> fclose(fptr);
// Read from a File.
// Write in a File.

// Types of Files.
// 1.Text Files :- textual data -> .txt, .c etc
// 2.Binary Files :- binary data -> .exe, .mp3, .jpg etc
  
// File Pointer : FILE is a hidden structure that needs to be created for opening a file A FILE ptr that points to this structure & is used to access the file. (FILE *fter)

//  "r"  --> open to read.  
//  "rb" --> open to read in binary.
//  "w"  --> open to write.
//  "wb" --> open to write in binary.
//  "a"  --> open to append.

// #include<stdio.h>
// int main(){
//     FILE *fptr,*hptr;
//     fptr=fopen("textDemo.txt","w");  
    // fptr=fopen("textDemo.txt","r");  
    // hptr=fopen("hello.txt","w");  Creates a file if it is doesn't exist
    // fputc('s',fptr);
    // fputc('a',fptr);
    // fputc('u',fptr);
    // fputc('r',fptr);
    // fputc('b',fptr);
    // fputc('h',fptr);
    // fputc('c',fptr);
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    
    
//     fclose(fptr);
// }

// EOF: End Of File.
// fgetc returns EOF to show that file has ended.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("textDemo.txt","r");
    char ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
}