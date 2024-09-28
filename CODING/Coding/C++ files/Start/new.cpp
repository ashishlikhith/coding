// printing minimum and maximum value of an array

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array values: ";

//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     int max = INT8_MIN, min = INT8_MAX;

//     for(int i = 0; i < n; i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }

    
//     for(int i = 0; i < n; i++){
//         if(min > arr[i]){
//             min = arr[i];
//         }
//     }

//     cout << "Maximum value: " << max << endl;
//     cout << "Minimum value: " << min << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/ sizeof(arr[0]);
//     int start = 0, end = size - 1;

//     for(int i = 0; i<size/2;i++){
//         int temp = arr[end];
//         arr[end] = arr[start];
//         arr[start] = temp;

//         start++;
//         end--;
//     }

//     for(int i = 0; i<size;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {3, 5, 9, 13, 27};
//     int n = 5;
//     int mid, start = 0, end = n - 1;

//     int key = 25;

//     mid = (start + end)/2;

//     while(start <= end){
//         mid = (start + end)/2;

//         if(key == arr[mid]){
//             cout << "found " << mid << " " << arr[mid];
//             return 0;
//         }
//         else if (key > arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }

//     cout << "Not found";
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// void beg(vector <int>&arr, int ele){
//     arr.insert(arr.begin(), ele);
// }

// void end(vector <int>&arr, int ele){
//     arr.push_back(ele);
// }
// void pos(vector <int>&arr, int ele, int pos){
//     arr.insert(arr.begin() + pos, ele);
// }

// int main(){
//     vector <int> arr = {1,2,3,4,5};

//     beg(arr,0);
//     end(arr,6);
//     pos(arr,9,2);

    
//     // for(int i = 0;i<10;i++){
//     //     cout << arr[i] << " ";
//     // }

//     for(int num : arr){
//         cout << num << " ";
//     }
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void beg(vector<int>& arr) {
//     arr.erase(arr.begin());
// }
// void end(vector<int>& arr) {
//     arr.pop_back();
// }
// void pos(vector<int>& arr, int pos) {
//     if (pos >= 0 && pos < arr.size()) { // Check if pos is valid
//         arr.erase(arr.begin() + pos);
//     } else {
//         cout << "Index out of bounds!" << endl;
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};

//     beg(arr); // arr = {2, 3, 4, 5}
//     end(arr); // arr = {2, 3, 4}
//     pos(arr, 3); // This will now check bounds before attempting to erase

//     for (int num : arr) {
//         cout << num << " ";
//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// void reverse(vector <int> &arr){
//     reverse(arr.begin(), arr.end());
// }

// int main(){
//     vector <int> arr = {1,2,3,4,5};

//     reverse(arr);
//     for(int num : arr){
//         cout << num;
//     }
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void postion(vector <int> &arr,int n,int post, int elem){
//     arr.insert(arr.begin()+post, elem);
// }

// int main(){
//     int n;
//     cin >> n;
//     vector <int> arr(n);

//     for(int i = 0; i<n;i++){
//         cin >> arr[i];
//     }

//     int post, elem;
//     cin >> post;
//     cin >> elem;

//     postion(arr, n, post, elem);

//     for(int i = 0;i<n+1;i++){
//         cout << arr[i] << " ";
//     }

// }

#include<iostream>