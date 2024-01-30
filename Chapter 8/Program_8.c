// Practice Qs 47
// Create a String firstName & lastName to store the details of user & print all the characters using loop.
// #include<stdio.h>
// int main(){
//     char firstName[] = {'S','A','U','R','A','B','H','\0'};
//     char lastName[] = {'C','H','O','R','G','E','\0'};
//     printf("First Name :");
//     for(int i = 0;firstName[i]!='\0';i++){
//         printf(" %c",firstName[i]);
//     }
//     printf("\n");
//     printf("Last Name :");
//     for(int i = 0;lastName[i]!='\0';i++){
//         printf(" %c",lastName[i]);
//     }
// }

// Using Function 
// #include<stdio.h>
// void printName(char arr[]);
// int main(){
//     char firstName[] = "Saurabh";
//     char lastName[] = "Chorge";
//     printName(firstName);
//     printName(lastName);
// }
// void printName(char arr[]){
//     for(int i = 0;arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }

// Practice Qs 48
// Ask user to enter their first name & print it back to them.
// #include<stdio.h>
// int main(){
//     char name[10];
//     printf("Enter your name : ");
//     scanf("%s",&name);
//     printf("Good Morning %s",name);
// }
// Also try with their full name.
 #include<stdio.h>
int main(){
    char fullName[50];
    printf("Enter your name : ");
    gets(fullName);
    puts(fullName);
}