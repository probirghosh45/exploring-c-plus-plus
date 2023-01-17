#include<iostream>
using namespace std;


// C++ String to read a word


// int main() {
//     char str [100];
//     cout << "Enter A String : " ;
//     cin >> str;
//     cout << "You Entered :" << str << endl;
// }


// input = Probir Ghosh
// output = Probir

// This is because the extraction operator >> works as scanf() in C and considers a space " " has a terminating character

// *******************

// C++ String to read a line of text


int main () { 
   char str [100];
   cout << "Enter A String : ";
   cin.get (str , 100);
   cout << "You Entered :" << str << endl;
   
   
    return 0;
    }

//     To read the text containing blank space, cin.get function can be used. This function takes two arguments.

// First argument is the name of the string (address of first element of string) and second argument is the maximum size of the array.

// In the above program, str is the name of the string and 100 is the maximum size of the array



// *************************



