//changing the capital char in small and small char into captial

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char x[30];
//     printf("Enter a string: ");
//     fgets(x,sizeof(x),stdin);
//     int i = 0;
//     while(x[i] != '\0'){
//         if(x[i]>='a' && x[i]<='z'){
//             x[i] = x[i]-32;
//         }
//         else if(x[i]>='A' && x[i]<='Z'){
//             x[i] = x[i] +32;
//         }
//         i++;
//     }
//     puts(x);
// }

//concatination of 2 strings of multiple words

// #include <stdio.h>
// #include <string.h>

// int main() {
//    int n1, n2;
//    char strings1[10][100], strings2[10][100];

//    // Input
//    scanf("%d", &n1);
//    for (int i = 0; i < n1; i++) {
//        scanf("%s", strings1[i]);
//    }
//    scanf("%d", &n2);
//    for (int i = 0; i < n2; i++) {
//        scanf("%s", strings2[i]);
//    }

//    // Output
//    printf("Combined strings: ");
//    for (int i = 0; i < n1; i++) {
//        printf("%s ", strings1[i]);
//    }
//    for (int i = 0; i < n2; i++) {
//        printf("%s ", strings2[i]);
//    }

//    return 0;
// }


//Slicing the string of the of the giving index number 

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void slice(char word[],int n,int m);
// int main(){
//     int n,m;
//     char word[100];

//     printf("enter the string: ");
//     fgets(word, 100,stdin);

//     printf("The entered string is: ");
//     puts(word);

//     printf("Enter the starting and ending Index: ");
//     scanf("%d %d",&n,&m);

//     slice(word,n,m);
// }

// void slice(char word[], int n,int m){
//     if (n < 100 && m < 100 && n < m){
//         for(int i = n;i<=m;i++){
//             printf("%c",word[i]);
//         }
//     }
// }


// Salting process
// It is used in compines when the user enter the password the salt already have some stored string and concatinated at some random postion.
// example user enterd password: test and salt is 123 and the password stored as test123 in data base

// #include <stdio.h>
// #include <string.h>

// void salting(char password[]);
// int main(){
//     char password[100];
//     scanf("%s",password);

//     salting(password);

// }
// void salting(char password[]){
//     char salt[] = "123";
//     char newpass[100];
//     strcpy(newpass, password);
//     strcat(newpass, salt);

//     printf("%s",newpass);
// }


//Checking weather the given char is present or not 

// #include <stdio.h>
// #include <string.h>

// void check(char word[],char letter);
// int main(){

//     char word[100];
//     printf("Enter the str: ");
//     fgets(word, 100, stdin);

//     char letter;
//     printf("Enter the char to find: ");
//     scanf("%c",&letter);

//     check(word,letter);
// }
// void check(char word[],char letter){
//     for(int i = 0;word[i] != '\0';i++){
//         if(word[i] == letter){
//             printf("Letter found %c at index %d",word[i],i);
//             break;
//         }
//     }
// }


//counting the number of repated words and printing the side by side
//ex: aaaabbBccd output: a4b2B1c2d1

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char inputString[101]; 
//     scanf("%s", inputString); 
    
//     int length = strlen(inputString);
    
//     for (int i = 0; i < length; i++) {
//         int count = 1;
//         printf("%c", inputString[i]); 
        
        
//         while (i + 1 < length && inputString[i] == inputString[i + 1]) {
//             count++;
//             i++;
//         }
        
//         printf("%d", count);
//     }
    
//     return 0;
// }
