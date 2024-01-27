// Functions :  Functions are block of code that performs particular task. It can be used multiple times, increase code reusability.
// Properties : Always execution of a program starts from main. Functions are called directly or indirectly from main. There can be multiple functions in a program.
// Syntax 1 : Function Prototype;
// Syntax 2 : Function Defination;
// Syntax 3 : Function Call;

// Example :
#include<stdio.h>
void printHello();
int main(){
    printHello();
}
void printHello(){
    printf("Hello world!");
}