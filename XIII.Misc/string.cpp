// C++ Program to Demonstrate String Class
#include<iostream>
// for string class
#include<string>
using namespace std;
int main()
{
	// // Size has to be predefined in character array
	// char str[80] = "GeeksforGeeks";

	// // Size not predefined in string
	// string s("GeeksforGeeks");

	// // Printing character array and string
	// cout << str << endl;
	// cout << s << endl;





    // string str("GeeksforGeeks");
    // string str1("GeeksforGeeks");
 
    // // Comparing strings using compare()
    // if (str.compare(str1) == 0)
    //     cout << "Strings are equal";
    // else
    //     cout << "Strings are unequal";




//  string str("The Geeks for Geeks");
 
//     // find() returns position to first
//     // occurrence of substring "Geeks"
//     cout << "First occurrence of \"Geeks\" starts from : ";
//     cout << str.find("Geeks") << endl;
 
//     // Prints position of first occurrence of
//     // any character of "reef" (Prints 2)
//     cout << "First occurrence of character from \"reef\" is at : ";
//     cout << str.find_first_of("reef") << endl;
 
//     // Prints position of last occurrence of
//     // any character of "reef" (Prints 16)
//     cout << "Last occurrence of character from \"reef\" is at : ";
//     cout << str.find_last_of("reef") << endl;
 
//     // rfind() returns position to last
//     // occurrence of substring "Geeks"
//     // Prints 14
//     cout << "Last occurrence of \"Geeks\" starts from : ";
//     cout << str.rfind("Geeks") << endl;
 

string str("Geeksfor");
 
    // Printing the original string
    cout << str << endl;
 
    // Inserting "Geeks" at 8th index position
    str.insert(8,"Geeks");
 
    // Printing the modified string
    // Prints "GeeksforGeeks"
    cout << str << endl;


 string str("GeeksforGeeks");
 
    // clearing string
    str.clear();
 
    // Checking if string is empty
    (str.empty()==1)?
        cout << "String is empty" << endl:
        cout << "String is not empty" << endl;
 

	return 0;
}




