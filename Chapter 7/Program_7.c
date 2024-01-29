// Practice Qs 41
// Write a program to enter price of 3 items & print their final cost with gst.
// #include<stdio.h>
// int main(){
//     int items[3];
//     printf("Enter the price of 1st item : ");
//     scanf("%d",&items[0]);
//     printf("Enter the price of 2nd item : ");
//     scanf("%d",&items[1]);
//     printf("Enter the price of 3rd item : ");
//     scanf("%d",&items[2]);
    
//     printf("GST for item 1 is : %.2f\n",items[0]+(items[0]*0.18));
//     printf("GST for item 2 is : %.2f\n",items[1]+(items[1]*0.18));
//     printf("GST for item 3 is : %.2f\n",items[2]+(items[2]*0.18));
  
// }

// Practice Qs 42
// Write a function to count the numbers of odd numbers in an array.
// #include<stdio.h>
// int oddCount(int arr[]);
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,11,10};
//     printf("The odd numbers in an given array are %d",oddCount(arr));
// }
// int oddCount(int arr[]){
//     int count=0;
//     for(int i=0;i<10;i++){
//         if(arr[i]%2!=0){
//             count++;
//         }
//     }
//     return count;
// }

// Practice Qs 43
// For a given array,what will be the following give?
// a.*(arr+2)
// b.*(arr+5)
// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     printf("%d\n",*(arr+2));
//     printf("%d",*(arr+5));
// }

// Practice Qs 44
// Write a function to reverse an array
// #include<stdio.h>
// void reverseArr(int arr[],int n);
// int main(){
//     int arr[]={1,2,3,4,5,6,7},n=6;
//     reverseArr(arr,n);
// }
// void reverseArr(int arr[],int n ){
//     for(int i=n;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
// }

// Practice Qs 45
// Write a program to store the first n fibonacci numbers
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;
//     printf("%d %d ",fib[0],fib[1]);
//     for(int i=2;i<n;i++){
//         fib[i]=fib[i-1]+fib[i-2];
//         printf("%d ",fib[i]);
//     }
// }
