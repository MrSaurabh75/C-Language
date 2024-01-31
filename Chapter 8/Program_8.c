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
//  #include<stdio.h>
// int main(){
//     char fullName[50];
//     printf("Enter your name : ");
//     // gets(fullName);
//     // puts(fullName);
//     fgets(fullName,100,stdin);
//     puts(fullName);
// }

// Practice Qs 49
// Make a program that inputs user's name & prints it's lengthz.
// #include<stdio.h>
// int countChar(char n[]);
// int main(){
//     char name[100];
//     fgets(name,100,stdin);
//     puts(name);
//     printf("There are %d characters in a given string\n",countChar(name));
// }
// int countChar(char n[]){
//     int count=0;
//     for(int i=0;n[i]!='\0';i++){
//         count++;
//     }
//     return count-1;
// }

// Practice Qs 50
// Take a string input from the user using %c
// #include<stdio.h>
// int main(){
//     char name[100];
//     char ch;
//     int i=0;
//     printf("Enter your name : ");
//     while(ch!='\n'){
//         scanf("%c",&ch);
//         name[i]=ch;
//         i++;
//     }
//     name[i]='\0';
//     puts(name);
// }

// Practice Qs 51
// Salting 
// #include<stdio.h>
// #include<string.h>
// void InstagramPass(char upass[]);
// int main(){
//     char pass[100];
//     printf("Enter your password : ");
//     scanf("%s",pass);
//     InstagramPass(pass);

// }
// void InstagramPass(char upass[]){
//     char salt[]="123";
//     char newPass[100];
//     strcpy(newPass,upass);
//     strcat(newPass,salt);
//     puts(newPass);
// }

// Practice Qs 52
// Write a function named slice,which takes a string and returns a sliced string from index n to m.
// #include<stdio.h>
// void sclice(char str[],int m,int n);
// int main(){
//     char str[100];
//     scanf("%s",&str);
//     sclice(str,3,6);
// }
// void sclice(char str[],int n,int m){
//     char newStr[100];
//     int j=0;
//     for(int i=n;i<=m;i++ ,j++){
//         newStr[j]=str[i];
//     }
//     newStr[j]='\0';
//     puts(newStr);
// }

// Practice Qs 53
// Write a function to count the occurrance of vowels in a string.
// #include<stdio.h>
// #include<string.h>
// int countVowels(char str[]);
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     printf("There are %d vowels in a String.",countVowels(str));

// }
// int countVowels(char str[]){
//     int len = strlen(str);
//     int count=0;
//     for(int i=0;i<len;i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//             count++;
//         }
//     }
//     return count;
// }

// Practioce Qs 54
// Check if given character is present in a string or not.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     char f;
//     fgets(str,100,stdin);
//     printf("Enter a charcter you want to find : ");
//     scanf("%c",&f);
//     int len = strlen(str);
//     for(int i=0;i<len;i++){
//         if(str[i]==f){
//             printf("Charcter founnd !\n");
//         }
//     }
// }