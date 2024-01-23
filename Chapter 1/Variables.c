// Variables --> Variables is the name of memory location which stores some data.

// Rules to write a Variables in C
    // a.Variables are case sensitive
    // b.1st char is alphabet or '_'
    // c.no comma / blank space
    // d.No other symbol other than '_'
#include<stdio.h>

int main(){
    int age = 45;
    char str = '*';
    float pi  = 3.14;
    printf("Age is %d\n",age);
    printf("Star %c\n",str);
    printf("Age is %f\n",pi);
    return 0;
}

// Constants --> Values that don't change(fixed)
    // a.Integer Constants = 1,2,3,0,-1,-2
    // b.Real Constants = 1.0,2.0,3.14,-2.4
    // c.Character Constant = 'a','b','A','#','$'