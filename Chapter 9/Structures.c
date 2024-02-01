// Strctures : A collection of values of different data types. Structure is stored in contiguous memory location.
// #include<stdio.h>
// #include<string.h>

// struct employee
//     {
//         char name[100];
//         int id;
//         float salary;
//     };
// int main(){
//     struct employee e1;
//     strcpy(e1.name,"Saurabh Chorge");
//     e1.id=45;
//     e1.salary=4.5;
    
//     printf("%s\n",e1.name);
//     printf("%d\n",e1.id);
//     printf("%.2fLPA",e1.salary);
// }

// Array of Structures.
// #include<stdio.h>
// #include<string.h>
// struct emp{
//     int id;
//     char name[100];
//     float salary;
// };
// int main(){
//     struct emp Wipro[100];
//     struct emp Infosys[100];
//     struct emp Cognizent[100];

//     Wipro[0].id=1001;
//     strcpy(Wipro[0].name,"Saurabh Chorge");
//     Wipro[0].salary=45.45;

//     printf("Name : %s\n",Wipro[0].name);
//     printf("ID : %d\n",Wipro[0].id);
//     printf("Salary : %.2f\n",Wipro[0].salary);
// }

// Initialization of Structures
// #include<stdio.h>
// struct Student
// {
//     char name[100];
//     int roll;
//     float marks;
// };
// int main(){
//     struct Student s1 ={"Saurah Chorge",16,89.79};
//     printf("%s\n",s1.name);
//     printf("%d\n",s1.roll);
//     printf("%.2f\n",s1.marks);
// }

// Pointers to Structure
// struct Student
// {
//     char name[100];
//     int roll;
//     int marks;
// };
// int main(){
//     struct Student s1={"Saurabh Chorge",1001,90};
//     struct Student *ptr=&s1;
    
//     printf("Name : %s\n", (*ptr).name);
//     printf("Roll No. : %d\n", (*ptr).roll);

//     // or

//     printf("Name : %s\n", ptr->name);
//     printf("Roll No. : %d\n", ptr->roll);

// }

// Passing structures to functions
// #include<stdio.h>
// struct student
// {
//     char name[100];
//     int rollNo;
//     int marks;
// };

// void studentInfo(struct student s1);
// int main(){
//     struct student s1 = {"Saurabh Chorge",2002,90};
//     studentInfo(s1);
// }
// void studentInfo(struct student s1){
//     printf("Name : %s\n",s1.name);
//     printf("Roll No. : %d\n",s1.rollNo);
//     printf("Marks : %d\n",s1.marks);
// }

// typedef Keyword : Used to create alias for data types
// #include<stdio.h>
// typedef struct ComputerEngineeringStudent
// {
//     int roll;
//     float cgpa;
//     char name[100];
// }coe;

// int main(){
//     coe s1={2002,9.5,"Saurabh Chorge"};
//     printf("Name : %s\n",s1.name);
// }

