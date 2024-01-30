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
//     gets(name);
//     puts(name);
// }