// Array : Collection of similar data types stored at contiguous memory location.
// #include<stdio.h>
// int main(){
//     int marks[4]={90,57,67,68};
//     scanf("%d",&marks[1]);
//     printf("%d",marks[3]);

//     int age[4];
//     scanf("%d",&age[0]);
//     scanf("%d",&age[1]);
//     scanf("%d",&age[2]);
//     scanf("%d",&age[3]);
//     printf("Saurabh = %d & Laxman = %d & Mahesh = %d & Raj = %d",age[0],age[1],age[2],age[3]);
// }

// Initialization of Array : 
// #include<stdio.h>
// int main(){
//     int marks[]={99,98,9,7};
//     int marks2[3]={99,98,7};
// }

// Pointers Arithmetic : Pointers can be incremented & decremented 1.We can also subtract one pointer from another. 2.We can also compare two pointers.
// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("%d\n",ptr);
//     ptr++;
//     printf("%d\n",ptr);
//     ptr--;
//     printf("%d\n",ptr);
    
//     float price = 22.56;
//     float *ptrf = &price;
//     printf("%u\n",ptrf);
//     ptrf++;
//     printf("%u\n",ptrf);
//     ptrf--;
//     printf("%u\n",ptrf);
    
//     char c = 'S';
//     char *ptrc = &c;
//     printf("%u\n",ptrc);
//     ptrc++;
//     printf("%u\n",ptrc);
//     ptrc--;
//     printf("%u\n",ptrc);
// }

// #include<stdio.h>
// int main(){
//     int age = 23;
//     int age2 = 23;
//     int *ptr = &age;
//     int *ptr2 = &age2;
//     printf("ptr = %u ptr2 = %u Diffrence = %d\n",ptr,ptr2,ptr-ptr2);
//     ptr2=&age;
//     printf("Comparison = %d\n",ptr==ptr2);
    
// }

// Array is a Pointer.
// #include<stdio.h>
// int main(){
//     int arr[2]={23,67};
//     int *ptr = &arr[1];
//     printf("%d",*ptr);
//     printf(" %u",ptr);
// }

// Traverse an Array
// #include<stdio.h>
// int main(){
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for(int i=0;i<5;i++){
//         printf("%d index : ",i);
//         scanf("%d",(ptr+i));
//     }
    
//     for(int i=0;i<5;i++){
//         printf("%d index : %d\n",i,aadhar[i]);
//     }
// }