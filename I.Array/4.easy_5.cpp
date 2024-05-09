
#include <iostream>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;

int firstRepeating(int arr[], int n)
{

    int max = -1;
    // Finding max
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    // Creating array
    int hash[max + 1] = {0};

    // Mapping/counting
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    // Variable for storing ans
    int repeating = INT_MIN;
    // Checking repeatibng element
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            repeating = arr[i];
            break;
        }
    }

    return repeating;
}

int findMissing(int arr1[], int arr2[], int M,
                int N)
{
    if (M != N - 1 && N != M - 1)
    {
        cout << "Invalid Input";
        return -1;
    }

    // Do XOR of all element
    int res = 0;
    for (int i = 0; i < M; i++)
        res = res ^ arr1[i];
    for (int i = 0; i < N; i++)
        res = res ^ arr2[i];

    return res;
}

int thirdLargest(int arr[], int arr_size)
{
    // if array size is less than 3,
    // then it will give invalid input
    if (arr_size < 3)
    {
        cout << " Invalid Input" << endl;
        return 0;
    }
    else
    {
        // here we are sorting the array
        // return 3rd largest element
        sort(arr, arr + arr_size);
        return arr[arr_size - 3];
    }
}
int findMajority(int arr[], int n)
{
    return arr[n / 2];
}
int find_consecutive_steps(int arr[], int len)
{
    int count = 0;
    int maximum = 0;

    for (int index = 1; index < len; index++)
    {

        // count the number of consecutive
        // increasing height building
        if (arr[index] > arr[index - 1])
            count++;
        else
        {
            maximum = max(maximum, count);
            count = 0;
        }
    }

    return max(maximum, count);
}
int main()
{

    {
        int input_array[] = {10, 5, 3, 4, 3, 5, 6};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#1 Find the first repeating element in an array of integers" << std::endl;
        // 1)hash map
        // 2)sorting
        std::cout << "first repeating elelement: " << firstRepeating(input_array, size) << std::endl;
    }

    {
        int arr1[] = {4, 1, 5, 9, 7};
        int arr2[] = {7, 5, 9, 4};
        int M = sizeof(arr1) / sizeof(int);
        int N = sizeof(arr2) / sizeof(int);
        std::cout << std::endl;
        std::cout << "#2 Find lost element from a duplicated array" << std::endl;
        // 1)sorting x7
        // 2)hashmap
        // 3)XOR
        std::cout << "lost element: " << findMissing(arr1, arr2, M, N) << std::endl;
    }

    {
        int input_array[] = {12, 13, 1, 10, 34, 16};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#3 Third largest element in an array of distinct elements" << std::endl;
        // 1)sort-slicing
        // 2)linear search find top three

        std::cout << "hird largest elelement: " << thirdLargest(input_array, size) << std::endl;
    }

    {
        int input_array[] = {1, 2, 2, 3};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#4 Find element in a sorted array whose frequency is greater than or equal to size / 2. " << std::endl;
        // 1)hashmap
        // 2)middle number will be our answer
        std::cout
            << "Majority elelement: " << findMajority(input_array, size) << std::endl;
    }

    {
        int input_array[] = {1, 2, 3, 4};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#1 Maximise consecutive steps one can put forward on roof to gain an increase in altitude" << std::endl;
        // 1)iterate through the array ,store the updated min/max value-O(n)
        // 2)sort the array using STL-Time complexity : O(n log(n))
        // Auxiliary Space : O(1) return 0;
        std::cout << "Maximum steps: " << find_consecutive_steps(input_array, size) << std::endl;
    }

    return 0;
}