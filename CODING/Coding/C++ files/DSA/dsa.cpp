// // stack code
// // it has only way either in or out
// #include <iostream>
// using namespace std;

// int stack[100], n = 100, top = -1; // global varibles

// void push(int value)
// { // it enters the value you enter
//     if (top >= n - 1)
//     { // if top gets to its limit you can't enter the value
//         cout << "Stack is over flow";
//     }
//     else
//     {
//         top++;
//         stack[top] = value;
//     }
// }

// void pop()
// { // it poos the last value you entered
//     if (top <= -1)
//     { // if there is no value to pop out
//         cout << "Stack is undrflow";
//     }
//     else
//     {
//         cout << "poped value is: " << stack[top] << endl;
//         top--;
//     }
// }

// void display()
// { // display the value which are in stack
//     if (top >= 0)
//     { // it checks weather there is value in the stack or not
//         cout << "Stack elements are: ";
//         for (int i = top; i >= 0; i--)
//         {
//             cout << stack[i] << " ";
//         }
//         cout << endl;
//     }
//     else
//     {
//         cout << "stack is empty";
//     }
// }

// int main()
// {
//     int choice, value;
//     cout << "(1) for push " << endl;
//     cout << "(2) for pop " << endl;
//     cout << "(3) for display " << endl;
//     cout << "(4) for Exit" << endl;

//     // we use do while loop if the choice is 4 loop ends untill they enter 4 they can do push, pop, display
//     do
//     {
//         cout << "Enter a choice: " << endl;
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             cout << "Enter a value to push: ";
//             cin >> value;
//             push(value);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             cout << "You Exited the code " << endl;
//             break;
//         default:
//             cout << "Invalid choice: ";
//         }
//     } while (choice != 4);

//     return 0;
// }



// Queue
// In this we enter from back and exit from front

// #include <iostream>
// #include<cstring>
// using namespace std;

// int queue[100], n = 100, front = -1,rear = -1;
// void push(int value){
//     if(rear >= n-1){
//         cout << "Queue is Overflow";
//     }
    
//     else{
//         if (front == -1) front = 0;
//         rear++;
//         queue[rear] = value;
//         cout << "Pushed value: " << value << endl;
//     }
// } 

// void pop(){
//     if(front == -1 || front > rear){
//         cout << "Queue is underflow";
//     }
//     else{
//         cout << "Popped value is: " << queue[front] << endl;
//         front++;
        
//         if(front > rear){
//             front = rear = -1;
//         }
//     }
// }

// void display(){
//     if(front == -1 || front > rear){
//         cout << "Queue is Empty" << endl;
//     }
//     else{
//         cout << "Queue Items are: ";
//         for(int i = front;i<=rear;i++){
//             cout << queue[i] << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int value, choice;
//     cout << "(1) for push " << endl;
//     cout << "(3) for display " << endl;
//     cout << "(4) for Exit" << endl;
//     cout << "(2) for pop " << endl;
    

//     do{
//         cout << "Enter a choice: " ;
//         cin >> choice;

//         switch(choice){
//             case 1:
//                 cout << "Enter a value to push: ";
//                 cin >> value;
//                 push(value);
//             break;
            
//             case 2:
//                 pop();
//                 break;
            
//             case 3:
//                 display();
//                 break;
            
//             case 4:
//                 cout << "Exited";
//             break;

//             default:
//                 cout << "You Enter invaild choice !!" << endl;
//         }
//     }while(choice != 4);

//     return 0;
// }



// linked list

// #include<iostream>
// using namespace std;

// struct node{
//     struct node *prev;
//     int data;
//     struct node *next;
// };

// struct node *head, *temp;

// int main(){

//     int choice;
//     cout << "Enter the choice: ";
//     cin >> choice;

//     while(choice){
//         struct node *newnode = new node();
//         cout << "Enter data: ";
//         cin >> newnode -> data;
//         newnode ->prev = NULL;
//         newnode ->next = NULL;
        
//         if(head == NULL){
//             head = newnode;
//             temp = newnode;
//         } else{
//             temp ->next = newnode;
//             newnode->prev = temp;
//             temp = newnode;
//         }
//         cout << "Do you want to continue (0,1): ";
//         cin >> choice;
//     }

//     temp = head;
//     cout << "Before Insertaation: ";
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     temp = head;
//     cout << endl;

//     struct node * newnode = new node();
//     cout << "Enter data: ";
//     cin >> newnode->data;
//     newnode->prev = NULL;
//     newnode->next = NULL;

//     newnode->next = temp;
//     temp = head = newnode;

//     cout << "After Insertion: ";
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// struct Node{
// struct Node * prev;
// int data;
// struct Node * next;
// };
// struct Node *head,*temp;
// int main(){
// int choice;
// cout<<"Enter Choice: (0,1) ";
// cin>>choice;
// while (choice)
// {
// struct Node * newnode = new Node();
// cout<<"Enter data: ";
// cin>>newnode->data;
// newnode->prev = NULL;
// newnode->next = NULL;
// if (head== NULL)
// {
// head = newnode;
// temp = newnode;
// }else{
// temp->next = newnode;
// newnode->prev = temp;
// temp = newnode;
// }
// cout<<"Do youn want to countinue: (0,1) ";
// cin>>choice;
// }

// temp= head;
// cout<<"Before Insertion: ";
// while (temp != NULL)
// {
// cout<<temp->data<<" ";
// temp = temp->next;
// }
// temp = head;
// cout<<endl;
// int loc,i=1;
// cout<<"Enter location where you want to insert: ";
// cin>>loc;

// while (i<loc-1)
// {
// temp = temp->next;
// i++;
// }

// struct Node * newnode = new Node();
// cout<<"Enter data: ";
// cin>>newnode->data;
// newnode->prev = NULL;
// newnode->next = NULL;
// newnode->prev = temp;
// newnode->next = temp->next;
// temp->next = newnode;
// temp->next->prev = newnode;


// temp=head;
// cout<<"After Insertion: ";
// while (temp != NULL)
// {
// cout<<temp->data<<" ";
// temp = temp->next;
// }

// return 0;
// }


// #include<iostream>
// using namespace std;
// struct Node{
// struct Node * prev;
// int data;
// struct Node * next;
// };
// struct Node *head,*temp;
// int main(){
// int choice;
// cout<<"Enter Choice: (0,1) ";
// cin>>choice;
// while (choice)
// {
// struct Node * newnode = new Node();
// cout<<"Enter data: ";
// cin>>newnode->data;
// newnode->prev = NULL;
// newnode->next = NULL;
// if (head== NULL)
// {
// head = newnode;
// temp = newnode;
// }else{
// temp->next = newnode;
// newnode->prev = temp;
// temp = newnode;
// }
// cout<<"Do youn want to countinue: (0,1) ";
// cin>>choice;
// }

// temp= head;
// cout<<"Before Insertion: ";
// while (temp != NULL)
// {
// cout<<temp->data<<" ";
// temp = temp->next;
// }
// temp = head;
// cout<<endl;

// struct Node * newnode = new Node();
// cout<<"Enter data: ";
// cin>>newnode->data;
// newnode->prev = NULL;
// newnode->next = NULL;

// newnode->next = temp;
// temp = head = newnode;


// cout<<"After Insertion: ";
// while (temp != NULL)
// {
// cout<<temp->data<<" ";
// temp = temp->next;
// }

// return 0;
// }



// #include<iostream>
// using namespace std;
// struct Node{
// struct Node * prev;
// int data;
// struct Node * next;
// };
// struct Node *head,*temp;
// int main(){
// int choice;
// cout<<"Enter Choice: (0,1) ";
// cin>>choice;
// while (choice)
// {
// struct Node * newnode = new Node();
// cout<<"Enter data: ";
// cin>>newnode->data;
// newnode->prev = NULL;
// newnode->next = NULL;
// if (head== NULL)
// {
// head = newnode;
// temp = newnode;
// }else{
// temp->next = newnode;
// newnode->prev = temp;
// temp = newnode;
// }
// cout<<"Do youn want to countinue: (0,1) ";
// cin>>choice;
// }

// temp= head;
// cout<<"Before Del: ";
// while (temp != NULL)
// {
// cout<<temp->data<<" ";
// temp = temp->next;
// }
// temp = head;
// cout<<endl;
// int loc,i=1;
// cout<<"Enter location where you want to Del: ";
// cin>>loc;

// while (i<loc)
// {
// temp = temp->next;
// i++;
// }
// temp->prev->next = temp->next;
// temp->next->prev = temp->prev;
// delete temp;

// temp=head;
// cout<<"After Del: ";
// while (temp != NULL)
// {
// cout<<temp->data<<" ";
// temp = temp->next;
// }

// return 0;
// }



// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     struct Node * next;
// };

// struct Node *head, *temp;
// int main(){
    
//     int choice,count = 0;
//     cout << "Enter a choice (0,1): ";
//     cin >> choice;
//     struct Node *headernode = new Node();

//     while(choice){
//         struct Node *newnode = new Node();    
//         cout << "Enter the data: ";
//         cin >> newnode->data;
//         newnode->next = NULL;
        
//         if(temp == NULL){
//             head = headernode;
//             headernode->next = newnode;
//             temp = newnode;
//             temp->next = headernode;
//         } else{
//             temp->next = newnode;
//             temp = newnode;
//             temp->next = headernode;
//         }
//         cout << "Enter the choice: ";
//         cin >> newnode->data;
//     }   

//     temp = headernode->next;
//     while(temp != headernode){
//         temp = temp->next;
//         count++;
//     }

//     cout << count;

//     while(temp != headernode){
//         cout << temp->data;
//         temp = temp->next;
//     }
    
//     return 0;
// }



//Circular linked list

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* head = NULL;
// struct Node* temp = NULL;

// int main() {
//     int choice, count = 0;
//     cout << "Enter a choice (0,1): ";
//     cin >> choice;

//     struct Node* headernode = new Node();

//     while (choice) {
//         struct Node* newnode = new Node();
//         cout << "Enter the data: ";
//         cin >> newnode->data;
//         newnode->next = NULL;

//         if (head == NULL) {
//             head = newnode;
//             headernode->next = head;
//             head->next = headernode; 
//             temp = head;
//         } else {
//             temp->next = newnode;
//             temp = newnode;
//             temp->next = headernode; 
//         }

//         cout << "Do you want to continue (0,1): ";
//         cin >> choice; 
//     }

//     temp = headernode->next;
//     while (temp != headernode){
//         temp = temp->next;
//         count++;
//     }

//     cout << "Count: " << count << endl;

    
//     temp = headernode->next;
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != headernode);

//     return 0;
// }




// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* head = NULL;
// struct Node* temp = NULL;

// int main() {
//     int choice, count = 0;
//     cout << "Enter a choice (0,1): ";
//     cin >> choice;

//     struct Node* headernode = new Node();

//     while (choice) {
//         struct Node* newnode = new Node();
//         cout << "Enter the data: ";
//         cin >> newnode->data;
//         newnode->next = NULL;

//         if (head == NULL) {
//             head = newnode;
//             headernode->next = head;
//             head->next = headernode; 
//             temp = head;
//         } else {
//             temp->next = newnode;
//             temp = newnode;
//             temp->next = headernode; 
//         }

//         cout << "Do you want to continue (0,1): ";
//         cin >> choice; 
//     }

//     temp = headernode->next;
//     while (temp != headernode){
//         temp = temp->next;
//         count++;
//     }

//     cout << "Count: " << count << endl;

    
//     temp = headernode->next;
//     while (temp != headernode){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* next;    
// };

// struct Node *top, *head;

// void push(){
//     struct Node* newnode = new Node();
//     cout << "Enter data: ";
//     cin >> newnode->data;

//     newnode->next = NULL;
//     if(head == NULL){
//         head = newnode;
//         top = newnode;
//     }else{
//         newnode->next = head;
//         top = newnode;
//         head = newnode;
//     }
// }

// void display(){
//     top = head;
//     cout << "Before del ";
//     while(top != NULL){
//         cout << top->data << " ";
//         top = top->next; 
//     }
//     cout << endl;
// }

// void pop(){
//     struct Node *temp;
//     temp = top;
//     head = head->next;
//     delete temp;
//     temp = head;
// }

// int main(){
//     int choice;
//     cout << "(1) for push " << endl;
//     cout << "(2) for pop " << endl;
//     cout << "(3) for display " << endl;
//     cout << "(4) for Exit" << endl;

//     do
//     {
//         cout << "Enter a choice: " << endl;
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             cout << "You Exited the code " << endl;
//             break;
//         default:
//             cout << "Invalid choice: ";
//         }
//     } while (choice != 4);

//     return 0;

// }



#include <iostream>
using namespace std;

class MyClass {
public:
    int num;

    MyClass() {
        num = 5; 
    }
};

class AnotherClass {
public:
    int num;

    AnotherClass() {
        num = 0;
    }

    void setNum(int n) {
        num = n * 2;
    }
};

int main() {
    MyClass obj1;
    AnotherClass obj2;
    obj2.setNum(obj1.num);
    cout << obj2.num;
    return 0;
}   