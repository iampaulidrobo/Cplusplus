#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 34; 
    cout<<"The value of a was: "<<a;
    a = 45; 
    cout<<"The value of a is: "<<a;
    //Constants in C++
    const int aa = 3;
    cout<<"The value of a was: "<<a<<endl;
    //aa = 45; // You will get an error because a is a constant
    //cout<<"The value of a is: "<<a<<endl;

    // Manipulators in C++
    int aaa =3, bbb=78, ccc=1233;
    cout<<"The value of aaa without setw is: "<<aaa<<endl;
    cout<<"The value of bbb without setw is: "<<bbb<<endl;
    cout<<"The value of ccc without setw is: "<<ccc<<endl;

    cout<<"The value of aaa is: "<<setw(4)<<aaa<<endl;
    cout<<"The value of bbb is: "<<setw(4)<<bbb<<endl;
    cout<<"The value of ccc is: "<<setw(4)<<ccc<<endl;


    // Operator Precedence
    int aaaa =3, bbbb=4;
    // int c = (a*5)+b;
    int cccc = ((((aaaa*5)+bbbb)-45)+87);
    cout<<cccc;
    return 0;
}
