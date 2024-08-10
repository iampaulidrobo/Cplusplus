
// C++ program to count words in  
// a string using stringstream.
#include <iostream>
#include <sstream>
#include<string>
using namespace std;
 
int countWords(string str)
{
    // Breaking input into word 
    // using string stream
   
    // Used for breaking words
    stringstream s(str); 
   
    // To store individual words
    string word; 
 
    int count = 0;
    while (s >> word)
        count++;
    return count;
}
 
// Driver code
int main()
{
    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << " Number of words are: " << countWords(s)<<endl;

    int val=123;
 
    // object from the class stringstream
    stringstream geek;
 
    // inserting integer val in geek stream
    geek << val;
 
    // The object has the value 123
    // and stream it to the string x
    string x_string;
    geek >> x_string;

    stringstream geeks;
    string val_string="123";
    
    geeks << val_string;

    int x_number;
    geeks>>x_number;
 
    // Now the string x holds the
    // value 123
    cout<<"The new string is "<<x_string+"4"<<endl;
    cout<<"The new number is "<<x_number<<endl;
    int myint1 = stoi(val_string);
    cout<<"using atoi "<<myint1<<endl;

    return 0;
}
