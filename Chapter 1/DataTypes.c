// Data Types -->
    // a.char = 1 bytes
    // b.int = 2 bytes
    // c.long = 4 bytes
    // d.float = 4 bytes
    // e.double = 8 bytes

    // *Note :- The String and Boolean data types are not present in C Language because C is invented in 1970 (By Dennis Ritchie)

#include<stdio.h>
int main(){
    int age = 22;
    float pi = 3.14;
    char doller = '$';
    long long_number = 1234567890;
    printf("Age is %d\n",age);
    printf("PI is %f\n",pi);
    printf("Doller %c\n",doller);
    return 0;
}