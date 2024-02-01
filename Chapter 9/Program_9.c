// Practice Qs 55
// Write a program to store the dataa of 3 students.
// #include<stdio.h>
// #include<string.h>

// struct student{
//     int rollNo;
//     char name[100];
//     int class;
// };
// int main(){
//     struct student s1;
//     struct student s2;
//     struct student s3;

//     s1.rollNo=01;
//     s2.rollNo=02;
//     s3.rollNo=03;
//     strcpy(s1.name,"Saurabh Chorge");
//     strcpy(s2.name,"Omkar Gaikwad");
//     strcpy(s3.name,"Amol Mane");
//     s1.class=10;
//     s2.class=10;
//     s3.class=10;
//     printf("Name of Student : %s\n",s1.name);
//     printf("Roll No. : %d\n",s1.rollNo);
//     printf("Class : %dth\n",s1.class);
//     printf("Name of Student : %s\n",s2.name);
//     printf("Roll No. : %d\n",s2.rollNo);
//     printf("Class : %dth\n",s2.class);
//     printf("Name of Student : %s\n",s3.name);
//     printf("Roll No. : %d\n",s3.rollNo);
//     printf("Class : %dth\n",s3.class);

// }

// Practice Qs 56
#include<stdio.h>
struct address
{
    int houseNo;
    int pin;
    char city[100];
    char state[100];
};

int main(){
    struct address a[5];

    int i=0;
    do{
        printf("Enter the House No. : ");
        scanf("%d\n",&a[i].houseNo);
        printf("Enter the Pin Code : ");
        scanf("%d\n",&a[i].pin);
        printf("Enter City : ");
        fgets(a[i].city,100,stdin);
        printf("Enter State : ");
        fgets(a[i].state,100,stdin);
        printf("Address :- House No.%d, %s, %s, %d\n",a[i].houseNo,a[i].city,a[i].state,a[i].pin);
        i++;
    }while(i==4);
}