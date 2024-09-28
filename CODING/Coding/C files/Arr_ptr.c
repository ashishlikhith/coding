//Arrays in c

// #include<stdio.h>
// int main(){
//     int a[5],i;
//     printf("Enter a the elements for list: ");
//     for(i=0;i<=4;i++){
//         scanf("%d ",&a[i]);
//     }
//     printf("Array is: ");
//     for(i=0;i<=4;i++){
//         printf("%d ",a[i]);
//     }
// }


//Array of even numbers

// #include<stdio.h>
// int main(){
//     int a[5],i,sum=0;
//     printf("Enter a the elements of array: ");
//     for(i=0;i<=4;i++){
//         scanf("%d ",&a[i]);
//     }
//     for(i = 0;i<=4;i++){
//         if(a[i]%2==0){
//             sum = sum+a[i];
//         }
//     }
//     printf("Sum is: %d",sum);
// }


//Printing avg of array in double type

// #include<stdio.h>
// int main(){
//     int i;
//     double arr[10],sum = 0;
//     printf("Enter a the elements if array: ");
//     for(i=0;i<=9;i++){
//         scanf("%lf ",&arr[i]);
//         sum = sum + arr[i];
//     }
//     printf("Average is %lf",sum/10);
    
// }


//2D Arrays

// #include<stdio.h>
// int main(){
//     int r,c,i,j;
//     scanf("%d %d",&r,&c);
//     int a[r][c];
//     for(i = 0;i<=r-1;i++){
//         for(j = 0;j<= r-1;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for(i = 0;i<=r-1;i++){
//         for(j = 0;j<= r-1;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }


//Matrix multiplication
/*
#include<stdio.h>
int main(){

    int a[3][3];
    for(int i = 0;i<=2;i++){
        for( int j = 0;j<= 2;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int b[3][3];
    for(int i = 0;i<=2;i++){
        for( int j = 0;j<= 2;j++){
            scanf("%d",&b[i][j]);
        }
    }


    // int a[3][3], b[3][3], 
    int c[3][3];
    for(int i=0; i <= 2; i+=1){
        for(int j = 0; j<=2; j++){
            c[i][j] = 0;
            for(int k = 0;k<=2;k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
*/

// Non digonal element with even number should be zero

// #include<stdio.h>
// int main(){
//     int a[3][3],trans[3][3];
//     for(int i = 0;i<=2;i++){
//         for(int j = 0;j<=2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for(int i = 0;i<=2;i++){
//         for(int j = 0;j<=2;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");  

//     for(int i = 0;i<=2;i++){
//         for(int j = 0;j<=2;j++){
//             // printf("%d",a[3][3]);
//             if(i != 0 && a[i][j] % 2 == 0){
//                 a[i][j] = 0;
//             }
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }




// Find the unique element of an array

// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d",&x);
//     int a[x];
//     for(int i=0;i<x;i++){
//         scanf("%d",&a[i]);
//     }

//     for(int i=0;i<x;i++){
//         int flag=0;
//         for(int j=0;j<x;j++){
//             if(a[i]==a[j]){
//                flag++; 
//             }
//         }
//         if(flag==1){
//             printf("%d ",a[i]);
//         }
//     }
// }




//take an array from user and print the greatest difference between i and j where arr[j] > arr[i]
//example arr = {1,2,3,4,5,6} (j = 5 and i = 0) output: max diff is 5 

// #include <stdio.h>
// #include <stdlib.h>

// int maxIndexDiff(int arr[], int n) {
//    int maxDiff = -1;
   
//    for (int i = 0; i < n; i++) {
//        for (int j = n - 1; j > i; j--) {
//            if (arr[j] > arr[i] && maxDiff < (j - i)) {
//                maxDiff = j - i;
//            }
//        }
//    }
   
//    return maxDiff;
// }

// int main() {
//    int N;
//    scanf("%d", &N);
   
//    int arr[N];
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &arr[i]);
//    }
   
//    int result = maxIndexDiff(arr, N);
//    printf("%d", result);
   
//    return 0;
// }


//Checking weather the number are in Consecutive weather what the order is
//example input {1,3,4,3} output isConsecutive  / {4,9,7} not Consecutive

// #include <stdio.h>

// void sorting(int arr[], int x);

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int s = sizeof(arr) / sizeof(arr[0]);

//     sorting(arr, s);
// }

// void sorting(int arr[], int x) {
//     for (int i = 0; i < x - 1; i++) {
//         for (int j = 0; j < x - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     int isConsecutive = 1;
//     for (int i = 0; i < x - 1; i++) {
//         if (arr[i] + 1 != arr[i + 1]) {
//             isConsecutive = 0;
//             break;
//         }
//     }

//     if (isConsecutive == 1) {
//         printf("Array elements are consecutive.\n");
//     } else {
//         printf("Array elements are not consecutive.\n");
//     }
// }


//printing the unique value of an array
//example {1,1,2,3,3} output 2

// #include <stdio.h>

// int findNonDuplicate(int arr[], int n) {
//     int result = 0;
//     for (int i = 0; i < n; i++) {
//         result ^= arr[i]; // bitwise xor operator which checks the any reapting
//     }
//     return result;
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int nonDuplicate = findNonDuplicate(arr, n);
//     if (nonDuplicate != 0) {
//         printf("%d\n", nonDuplicate);
//     } else {
//         printf("No non-duplicate element found ");
//     }

//     return 0;
// }


//Ascending order of an array

// #include <stdio.h>
// void sorting(int arr[], int x);

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int s = sizeof(arr) / sizeof(arr[0]);

//     sorting(arr, s);
// }

// void sorting(int arr[], int x) {
//     for (int i = 0; i < x - 1; i++) {
//         for (int j = 0; j < x - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: ");
//     for (int i = 0; i < x; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }



//finding the number which was concecutive array and missing find the number which is missing

// #include <stdio.h>
// // Binary search function to find the missing seat number
// int findMissingSeat(int seats[], int size) {
//     int left = 0;
//     int right = size - 1;
    
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (seats[mid] != mid + 1) {
//             if (mid == 0 || seats[mid - 1] == mid) {
//                 return mid + 1;
//             }
//             right = mid - 1;
//         } else {
//             left = mid + 1;
//         }
//     }
    
//     return -1;
// }

// int main() {
//     int N;
//     // printf("Enter the total number of seats in the classroom: ");
//     scanf("%d", &N);
    
//     int occupiedSeats[N];
//     // printf("Enter the occupied seat numbers: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &occupiedSeats[i]);
//     }
    
//     int missingSeat = findMissingSeat(occupiedSeats, N);
//     if (missingSeat != -1) {
//         printf("%d\n", missingSeat);
//     } else {
//         printf("No missing seat number found in the classroom.\n");
//     }
    
//     return 0;
// }

//printing the even numbers form first and odd numbers after

// #include <stdio.h>

// void swap(int *xp, int *yp) {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             // Check if the current ID is odd and the next one is even, swap them
//             if (arr[j] % 2 != 0 && arr[j+1] % 2 == 0) {
//                 swap(&arr[j], &arr[j+1]);
//             }
//         }
//     }
// }

// int main() {
//     int N;
//     // printf("Enter the total number of employees: ");
//     scanf("%d", &N);
    
//     int employeeIDs[N];
//     // printf("Enter the employee IDs: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &employeeIDs[i]);
//     }
    
//     // Sort the employee IDs using bubble sort
//     bubbleSort(employeeIDs, N);
    
//     // printf("Sorted employee IDs: ");
//     for (int i = 0; i < N; i++) {
//         printf("%d ", employeeIDs[i]);
//     }
    
//     return 0;
// }



//placing the value at some fixed postion given

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);

//     int arr[100];
//     for(int i = 0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int val,position ;

//     scanf("%d %d",&val,&position);
//     // Calculate the size of the array
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // Check if the position is valid
//     if (position >= 0 && position <= size) {
//         for(int i = size-1;i>=position;i--){
//             arr[i+1] = arr[i];
//         }

//         arr[position] = val;

//         for(int i = 0;i<n+1;i++){
//             printf("%d ",arr[i]);
//         }
//     } else {
//         printf("Invalid position\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// void bubbleSort(int arr[], int size);

// int main() {
//     int n;
//     scanf("%d",&n);

//     int arr[n];

//     int size = sizeof(arr) / sizeof(arr[0]);

//     bubbleSort(arr, size);

//     // printf("Sorted array in ascending order: \n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// // Bubble Sort algorithm to sort the array in ascending order
// void bubbleSort(int arr[], int size) {
//     int i, j;
//     for (i = 0; i < size - 1; i++) {
//         // Last i elements are already sorted, so no need to check them
//         for (j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }



/*
Some important questions asked in colab
*/

// #include <stdio.h>

// void sorting(int arr[], int x);

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int s = sizeof(arr) / sizeof(arr[0]);

//     sorting(arr, s);
// }

// void sorting(int arr[], int x) {
//     for (int i = 0; i < x - 1; i++) {
//         for (int j = 0; j < x - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: ");
//     for (int i = 0; i < x; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Check if array elements are consecutive
//     int isConsecutive = 1;
//     for (int i = 0; i < x - 1; i++) {
//         if (arr[i] + 1 != arr[i + 1]) {
//             isConsecutive = 0;
//             break;
//         }
//     }

//     if (isConsecutive) {
//         printf("The array is consecutive after sorting.\n");
//     } else {
//         printf("The array is not consecutive after sorting.\n");
//     }
// }


// #include<stdio.h>

// void reverseArray(int arr[], int x);

// int main(){
//     int n;
//     scanf("%d",&n);
    
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
    
//     for(int i = n; i>=0;i--){
//         printf("%d ",arr[i]);
//     }
// }



// #include <stdio.h>

// void sorting(int arr[], int x);

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int s = sizeof(arr) / sizeof(arr[0]);

//     sorting(arr, s);
// }

// void sorting(int arr[], int x) {
//     for (int i = 0; i < x - 1; i++) {
//         for (int j = 0; j < x - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array: ");
//     for (int i = 0; i < x; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// #include <stdio.h>

// int Test(int arr[], int l, int h, int target) {
//     if (l <= h) {
//         int mid = (l + h) / 2;
//         if (arr[mid] == target) {
//             return mid;
//         } else if (arr[mid] < target) {
//             return Test(arr, mid + 1, h, target);
//         } else {
//             return Test(arr, l, mid - 1, target);
//         }
//     }
//     return -1;
// }

// int main() {
//     int n[] = {10, 20, 30, 40, 50, 60, 70};
//     int size = 7;
//     int t = 50;
//     int r = Test(n, 0, size - 1, t);
//     printf("Element %d found at index %d\n", t, r);
//     return 0;
// }


//maximum number in an array using pointers

// #include<stdio.h>
// int main(){
//     int a[5] = {3,6,7,5,4};
//     int max;
//     int *p = a;
//     max = *p++;

//     for(int i = 0;i<5;i++){
//         if(*p>max)
//         max = *p;
//         p++;
//     }
//     printf("Maximum value is: %d",max);
// }


//taking input of 2 arrays and in first array printing odd number and in second array in even number 

/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    printf("Enter the size of both arrays: ");
    scanf("%d", &N);

    int *arr1 = (int *)malloc(N * sizeof(int));
    int *arr2 = (int *)malloc(N * sizeof(int));
    printf("Enter elements for the first array separated by spaces: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    int *oddArray = NULL;
    int *evenArray = NULL;
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < N; i++) {
        if (arr1[i] % 2 != 0) {
            oddArray = (int *)realloc(oddArray, (oddCount + 1) * sizeof(int));
            oddArray[oddCount++] = arr1[i];
        }

        if (arr2[i] % 2 == 0) {
            evenArray = (int *)realloc(evenArray, (evenCount + 1) * sizeof(int));
            evenArray[evenCount++] = arr2[i];
        }
    }

    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }

    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }
    return 0;
}

*/


//Finding the repeted value 

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    
    void *realloc(void *ptr, size_t size);

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicates
    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    // Output
    if (found) {
        printf("Found");
    } else {
        printf("Not found");
    }

    free(arr);

    return 0;
}
*/


//Finding the fibonacci number in array

/*
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int N;
    
    scanf("%d", &N);

    int *arr = (int *)malloc(N * sizeof(int));

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < N; i++) {
        if (isFibonacci(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    free(arr);

    return 0;
}
*/


//Printing the arrray in ascending order

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     printf("Enter the Array: ");
//     int *a = (int *) calloc(n,sizeof(int));

//     for(int i = 0;i<n;i++){
//         scanf("%d",&(*(a+i)));
//     }

//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(a[i]<a[j]){   //changing the sign a[i]<a[j] to a[i]>a[j] we can print in descending order
//                 int temp = a[i]; 
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     printf("The Array in sorted order: ");
//     for(int i = 0;i<n;i++){
//         printf("%d ",(*(a+i)));
//     }
    
//     return 0;
// }


// sum of 2 array where second array in reverse order which is given order

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     printf("Enter the Array: ");
//     int *a = (int *) calloc(n,sizeof(int));
//     int *b = (int *) calloc(n,sizeof(int));

//     for(int i = 0;i<n;i++){
//         scanf("%d",&(*(a+i)));
//     }

//     printf("Enter second array: ");
//     for(int j = 0;j<n;j++){
//         scanf("%d",&(*(b+j)));
//     }

//     for(int i =0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(b[i]<b[j]){
//                 int temp =b[i];
//                 b[i] = b[j];
//                 b[j] = temp;
//             }
//         }
//     }

//     // for(int j = 0;j<n;j++){
//     //     printf("%d",(*(b+j)));
//     // }
    

//     for(int i = 0;i<n;i++){
//         printf("First array: %d second array: %d sum is: %d\n",a[i],b[i],a[i]+b[i]);
//     }
    
// }


//deleting a specfic number given by the user

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);

//     int b[5] = {1,2,3,4,5};
//     int s = sizeof(b)/sizeof(b[0]);

//     for(int i =0;i<s;i++){
//         if(n == b[i]){
//             for(int j = i;j<=s;j++){
//                 b[j] = b[j+1];
//             }
//             s--;
//             break;
//         }
//     }

//     for(int i = 0;i<s;i++){
//         printf("%d ",b[i]);
//     }

// }

//Merging of 2 arrays if the postion is even first array values takes place in odd second array values these are copied into third array and print the third array

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n1,n2,h=0,k=0;
//     printf("Enter a number: ");
//     scanf("%d %d",&n1,&n2);

//     printf("Enter the Array: ");
//     int *a = (int *) calloc(n1,sizeof(int));
//     int *b = (int *) calloc(n2,sizeof(int));

//     for(int i = 0;i<n1;i++){
//         scanf("%d",&a[i]);
//     }

//     for(int i = 0;i<n2;i++){
//         scanf("%d",&b[i]);
//     }

//     int c[n1+n2];

//     int j = 0;
//     while(j < (n1+n2)){
//         if(j%2 == 0){
//             c[j] = a[k++];
//         }
//         else {
//             c[j] = b[h++];
//         }
//         j++;
//     }

//     for(int i = 0;i<(n1+n2);i++){
//         printf("%d ",c[i]);
//     }

// }

//Insert number at specific postion

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     printf("Enter num: ");
//     scanf("%d",&n);
    
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int num,pos;
//     scanf("%d %d",&num,&pos);

//     pos--;

//     int i;
//     for(i = n;i != pos;i--)
//     arr[i] = arr[i-1];
//     arr[i] = num;

//     for(int i = 0;i<=n;i++){
//         printf("%d ",arr[i]);
//     }
    
// } 