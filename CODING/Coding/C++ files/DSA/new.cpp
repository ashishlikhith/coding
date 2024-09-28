// linear search

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     bool f = false;
//     cout << "Enter the size: ";
//     cin >> n;

//     int arr[n], value;

//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout << "Enter the value to serch: ";
//     cin >> value;

//     for(int i = 0; i<n;i++){
//         if(arr[i] == value){
//             f = true;
//             cout << "Value is found at " << i << " index";
//             break;
//         }
//     }

//     if(!f){
//         cout << "Element is not found ";
//     }

//     return 0;
// }


// Binary search

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;
//     int arr[n], lo, hi, val, mid;
//     bool f = false;

//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout << "Enter value to find: ";
//     cin >> val;

//     lo = 0;
//     hi = n-1;

//     while(lo<=hi){
//         mid = lo+(hi-lo)/2; // formual for finding mid we can also write (low + high) / 2
//         if(arr[mid] == val){
//             cout << "Found at: " <<mid << endl;
//             f = true;
//             break;
//         }
//         else if(arr[mid] < val){ // if val is greater the arr[mid]
//             lo = mid + 1;
//         }
//         else{       // if val is small then arr[mid]
//             hi = mid - 1;
//         }
//     }

//     if(!f){
//         cout << "Element is not found";
//     }

//     return 0;
// }


// SORTING

// Bubble sort

// #include<iostream>
// using namespace std;

// void Bubblesorting(int arr[], int n){
//     int temp;
//     for(int i = 0;i < n;i++){
//         for(int j = 0; j < n; j++){
//             if(arr[j] > arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     cout << "Sorted array: " << endl;
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the array ;";
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     Bubblesorting(arr, n);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int size = 6;
//     int count = 0;
//     int arr[] = {5, 2, 8, 3, 1, 4};
//     for (int i = 0; i < size - 2; i++) {
//         for (int j = 0; j < size - 2; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 count++;
//             }
//         }
//     }
//     cout << count;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int len, bre, area, pre;

//     cout << "enter length and breath: ";
//     cin >> len >> bre;

//     area = len * bre;
//     pre = 2 * (len+bre);

//     cout << "Area: " << area << endl;
//     cout << "Preimeter: " << pre;

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// struct Node {
//   int data;
//   struct Node * next;
   
// };
// struct Node *head,*temp;
// int main(){
// int choice;
// head = NULL;
// cout<<"Enter your Choice: ";
// cin>>choice;
// while (choice)
// {
//    struct Node * newnode = new Node();
//    cout<<"Enter the element: ";
//    cin>>newnode->data;
//    newnode->next = NULL;
//    if (head ==NULL)
//    {
//      temp = newnode;
//      head = newnode;
//    }else{
//     temp->next = newnode;
//     temp = newnode;
//    }
//     cout<<"Do you want to countinue: 1 ,0)";
//   cin>>choice;
// }

// temp = head;
// while (temp!=NULL)
// {
//    cout<<temp->data<<" ";
//    temp = temp->next;
// }
// cout<<endl;
// int fisrt;
// cout<<"Do you want insert at begning: (0,1) ";
// cin>>fisrt;
// if(fisrt){
// struct Node * newnode = new Node();
//    cout<<"Enter the element: ";
//    cin>>newnode->data;
//    newnode->next = head;
//    head =newnode;
//    temp = newnode;
// }
// cout<<endl;
// cout<<"After insertion at begning: ";
// while (temp!=NULL)
// {
//    cout<<temp->data<<" ";
//    temp = temp->next;
// }

//   cout<<endl;
// int pos,i=1;
// temp = head;
// cout<<"Enter any position: ";
// cin>>pos;
// while (i<pos)
// {
//    temp = temp->next;
//    i++;
// }

// struct Node * newnode = new Node();
// cout<<"Enter data: ";
// cin>>newnode->data;

// newnode->next = temp->next;
// temp->next = newnode;

// temp = head;

//  cout<<"After Insertion:";
//    while (temp!= NULL)
//    {
//    cout<<temp->data<<" ";
//    temp = temp->next;
//    }

// return 0;

// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array values: ";

    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    int max = INT8_MIN, min = INT8_MAX;

    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;

    return 0;
}