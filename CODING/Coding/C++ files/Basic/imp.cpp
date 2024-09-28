// #include<iostream>
// using namespace std;

// int main(){
//     int pos, new_element, n;
//     cout << "Enter length of the array: ";
//     cin >> n;
//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     n++;
    
//     cout << "Enter new value: ";
//     cin >> new_element;
//     cout << "Enter the postion: ";
//     cin >> pos;

//     for(int i = n;i>pos;i--){
//         arr[i]=  arr[i-1];
//     }

//     arr[pos] = new_element;

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the length of the array: ";
//     cin >> n;
//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }    

//     n--;
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0; 
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];

//     for(int i = 0;i < n;i++){
//         cin >> arr[i];
//     }

//     for(int i = 0;i<n;i++){
//         arr[i] = arr[i+1];
//     }

//     n--;

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,pos;
//     cout << "Enter size: ";
//     cin >> n;
//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout << "Enter the postion: ";
//     cin >> pos;

//     for(int i = pos-1;i<n;i++){
//         arr[i] = arr[i+1];
//     }

//     n--;

//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr1[100], arr2[10],i,j;
//     int count, count1;

//     cout << "Enter size of array 1: ";
//     cin >> count;

//     for(i = 0;i<count;i++){
//         cin >> arr1[i];
//     }

//     cout << "Enter size of array 2: ";
//     cin >> count1;

//     for(j = 0;i<count1;i++){
//         cin >> arr2[j];        
//     }
    
// }


// #include <iostream>
// using namespace std;

// inline int square(int x) {
//     return x * x;
// }
// int main() {
//     int result = square(5 + 3);
//     cout << result;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// inline int sumOfSquaresEven(int n) {
//     int sum = 0;
//     for (int i = 2; n > 0; i += 2, n--) {
//         sum += i * i;
//     }
//     return sum;
// }

// inline int sumOfSquaresOdd(int n) {
//     int sum = 0;
//     for (int i = 1; n > 0; i += 2, n--) {
//         sum += i * i;
//     }
//     return sum;
// }

// int main() {
//     int N;
//     cin >> N;

//     int sumEven = sumOfSquaresEven(N);
//     int sumOdd = sumOfSquaresOdd(N);

//     cout << sumEven << endl;
//     cout << sumOdd << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Box {
//     double width;
//     public:
//         friend void printWidth( Box box );
//         void setWidth( double wid );
// };

// void Box::setWidth(double wid) {
//     width = wid;
// }

// void printWidth(Box box) {
//     box.width = box.width * 2;
//     cout << box.width << endl;
// }

// int main() {
//     Box box;
//     box.setWidth(10.0);
//     printWidth( box );
//     return 0;
// }   


// #include <iostream>
// using namespace std;

// long factorial (long a) {
//     if (a > 1)
//         return (a * factorial (a - 1));
//     else
//         return 1;
// }

// int main () {
//     long num = 3;
//     cout << num << "! = " << factorial ( num );
//     return 0;
// }


// A number is given loop is runned untill the num and divisors of each number untill end are added to sum(sum of divisors)

// #include <iostream>

// // Function to compute the sum of all divisors of a given number x
// int sumOfDivisors(int x) {
//     int sum = 0;
//     for (int i = 1; i <= x; ++i) {
//         if (x % i == 0) {
//             sum += i;
//         }
//     }
//     return sum;
// }

// // Function to compute the total sum of all divisors of numbers from 1 to n
// int divisorSum(int& n) {
//     int totalSum = 0;
//     for (int i = 1; i <= n; ++i) {
//         totalSum += sumOfDivisors(i);
//     }
//     return totalSum;
// }

// int main() {
//     int n;
//     std::cin >> n;  // Read input
    
//     int result = divisorSum(n);  // Compute the total sum of all divisors
//     std::cout << result << std::endl;  // Output the result
    
//     return 0;
// }