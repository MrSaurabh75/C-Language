// String : A character array terminated by a '\0'(null Character)
// #include<stdio.h>
// int main(){
//     char name[]={'s','a','u','r','a','b','h','\0'};
//     char name2[] = "Saurabh";
//     char college[] = {'M','I','B','S','\0'};
//     char college2[] = "MIBS";
// }

// Format specifier : %s
// #include<stdio.h>
// int main(){
//     char name[] = "Saurabh";
//     printf("%s",name); 
// }

// Important : scanf() cannot input multi-word strings with spaces.
// Here, gets() & puts() come into picture.
// #include<stdio.h>
// int main(){
//     char name[100];
//     // gets(name);
//     // puts(name);
//     fgets(name,100,stdin);
//     puts(name);
// }

// String using pointers : 
// #include<stdio.h>
// int main(){
//     char *str = "Hello World!"; //Can be reinitialize
//     puts(str);
//     str="Saurabh";
//     puts(str);
// }

// Standard Library Functions;
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[] = "Saurabh Chorge";
//     char myName[100];
//     char greet[]="Hello ";
//     printf("Length of string is %d\n",strlen(name));
//     strcpy(myName,name);
//     printf("%s\n",myName);
//     printf("%s\n",strcat(greet,name));
//     printf("%d\n",strcmp(greet,name));
// }