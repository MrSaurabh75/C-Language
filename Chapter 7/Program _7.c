// Practice Qs 41
// Write a program to enter price of 3 items & print their final cost with gst.
#include<stdio.h>
int main(){
    int items[3];
    printf("Enter the price of 1st item : ");
    scanf("%d",&items[0]);
    printf("Enter the price of 2nd item : ");
    scanf("%d",&items[1]);
    printf("Enter the price of 3rd item : ");
    scanf("%d",&items[2]);
    
    printf("GST for item 1 is : %.2f\n",items[0]+(items[0]*0.18));
    printf("GST for item 2 is : %.2f\n",items[1]+(items[1]*0.18));
    printf("GST for item 3 is : %.2f\n",items[2]+(items[2]*0.18));
  
}