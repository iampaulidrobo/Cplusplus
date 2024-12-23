// C++ Program to implement
// template Array class
#include <iostream>
using namespace std;

template <typename T> class Array {
private:
    T* ptr;
    int size;

public:
    Array(T arr[], int s);
    void print();
};

template <typename T> Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    a.print();
    return 0;
}

//-------------------------------------------------------------//

// C++ Program to implement
// Use of template
// #include <iostream>
// using namespace std;

// template <class T, class U> class A {
//     T x;
//     U y;

// public:
//     A() { cout << "Constructor Called" << endl; }
// };

// int main()
// {
//     A<char, char> a;
//     A<int, double> b;
//     return 0;
// }
        
