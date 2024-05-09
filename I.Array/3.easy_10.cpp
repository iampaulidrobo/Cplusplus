

// #- problem statement
// @-critical points

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include<vector>

int getMax(int input_array[], int size)
{
    int result = input_array[0];
    for (int i = 1; i < size; i++)
        result = std::max(result, input_array[i]);
    return result;
}
int dupLastIndex(int input_array[], int size)
{

    // if array is null or size is less
    // than equal to 0 return
    if (input_array == NULL || size <= 0)
        return 0;

    // compare elements and return last
    // duplicate and its index
    for (int i = size - 1; i > 0; i--)
    {
        if (input_array[i] == input_array[i - 1])
        {
            return input_array[i];
        }
    }

    return -1;
}
int mostFrequent(int input_array[], int size)
{
    // Insert all elements in hash.
    std::unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
        hash[input_array[i]]++;

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash)
    {
        if (max_count < i.second)
        {
            res = i.first;
            max_count = i.second;
        }
    }
    return res;
}
int leastFrequent(int input_array[], int size)
{
    // Insert all elements in hash.
    std::unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
        hash[input_array[i]]++;

    // find the min frequency
    int min_count = size + 1, res = -1;
    for (auto i : hash)
    {
        if (min_count >= i.second)
        {
            res = i.first;
            min_count = i.second;
        }
    }

    return res;
}
int binarySearch(int input_array[], int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (mid == input_array[mid])
            return mid;
        int res = -1;
        if (mid + 1 <= input_array[high])
            res = binarySearch(input_array, (mid + 1), high);
        if (res != -1)
            return res;
        if (mid - 1 >= input_array[low])
            return binarySearch(input_array, low, (mid - 1));
    }

    /* Return -1 if there is no Fixed Point */
    return -1;
}

int findSingle(int ar[], int ar_size)
{
    // Do XOR of all elements and return
    int res = ar[0];
    for (int i = 1; i < ar_size; i++)
        res = res ^ ar[i];

    return res;
}
int _binarySearch(int arr[], int low,
                  int high, int x)
{
    if (high >= low)
    {
        int mid = (low + high) / 2; /*low + (high - low)/2;*/

        /* Check if arr[mid] is the first occurrence of x.
            arr[mid] is first occurrence if x is one of
            the following is true:
            (i) mid == 0 and arr[mid] == x
            (ii) arr[mid-1] < x and arr[mid] == x
        */
        if ((mid == 0 || x > arr[mid - 1]) &&
            (arr[mid] == x))
            return mid;

        else if (x > arr[mid])
            return _binarySearch(arr, (mid + 1),
                                 high, x);
        else
            return _binarySearch(arr, low,
                                 (mid - 1), x);
    }
    return -1;
}
std::vector<int>
findCommonElements(const std::vector<int> &ar1,
                   const std::vector<int> &ar2,
                   const std::vector<int> &ar3)
{//@@@ why not use unordered map?
     std::unordered_set<int> set1(ar1.begin(), ar1.end());
    std::unordered_set<int> set2(ar2.begin(), ar2.end());
    std::unordered_set<int> set3(ar3.begin(), ar3.end());

    std::vector<int> finalList;

    for (int num : ar1)
    {
        if (set1.count(num) && set3.count(num))
        {
            finalList.push_back(num);
        }
    }

    return finalList;
}
int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];

    // For xor of all the elements from 1 to n+1
    int x2 = 1;

    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];

    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}
int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0;
    for (int i = 0; i < ar_size; i++)
        res = res ^ ar[i];

    return res;
}




int main()
{
    {
        int input_array[] = {1, 423, 6, 46, 34, 23, 13, 53, 4};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#1 Program to find the minimum(or maximum) element of an array" << std::endl;
        // 1)iterate through the array ,store the updated min/max value-O(n)
        // 2)sort the array using STL-Time complexity : O(n log(n))
        // Auxiliary Space : O(1) return 0;
        std::cout << "Maximum elelement: " << getMax(input_array, size) << std::endl;
    }
    {
        int input_array[] = {1, 5, 5, 6, 6, 7};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#2 Last duplicate element in a sorted array" << std::endl;
        // 1) iterate through the array in reverse order and compare the current and previous element-O(n)
        std::cout << "Last duplicate element: " << dupLastIndex(input_array, size) << std::endl;
    }
    {
        int input_array[] = {40, 50, 30, 40, 50, 30, 30};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#3 Most frequent element in an array" << std::endl;
        // 1)STL sorting-O(nlog(n))
        // 2)Hashmap-O(n)
        // 3)using moore's voting algorithm -@only if MAX OCCURANCE MORE THAN (SIZEOFARRAY/2) TIMES; O(n)
        // int maxFreq(int *arr, int n)
        // {
        //     // using moore's voting algorithm
        //     int res = 0;
        //     int count = 1;
        //     for (int i = 1; i < n; i++)
        //     {
        //         if (arr[i] == arr[res])
        //         {
        //             count++;
        //         }
        //         else
        //         {
        //             count--;
        //         }

        //         if (count == 0)
        //         {
        //             res = i;
        //             count = 1;
        //         }
        //     }

        //     return arr[res];
        // }
        std::cout << "Most frequent element: " << mostFrequent(input_array, size) << std::endl;
    }
    {
        int input_array[] = {1, 3, 2, 1, 2, 2, 3, 1};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#4 Least frequent element in an array" << std::endl;
        // 1) STL sort-O(n Log n)
        // 2)Hash map-O(n)
        std::cout << "Least frequent element: " << leastFrequent(input_array, size) << std::endl;
    }
    {
        int input_array[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#5 Find a Fixed Point(Value equal to index) in a given sorted array" << std::endl;
        // 1) linear search O(n)
        // 2) binary search-  O(log n)@Algorithmic Paradigm: Divide & Conquer
        std::cout << "Last duplicate elelement: " << binarySearch(input_array, 0, size) << std::endl;
    }
    {
        int input_array[] = {2, 3, 5, 4, 5, 3, 4};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#6 Find the element that appears once in an array where every other element appears twice" << std::endl;
        // 1) hash map- O(N)
        // 2)The best solution is to use XOR.O(n) XOR of all array elements gives us the number with a single occurrence. The idea is based on the following two facts.
        // XOR of a number with itself is 0.
        // XOR of a number with 0 is number itself.
        // 3)2*(sum_of_array_without_duplicates) – (sum_of_array) O(nlogn)
        // 4)binary search-O(nlogn)

        std::cout << "Single frequent elelement: " << findSingle(input_array, size) << std::endl;
    }
    {
        // int input_array[] = {1, 5, 5, 6, 6, 7};
        // int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#7 Find common elements in three sorted arrays" << std::endl;
        // 1) iterate through the array in reverse order and compare the current and previous element-O(n)
        std::vector<int> ar1 = {1, 5, 10, 20, 40, 80};
        std::vector<int> ar2 = {6, 7, 20, 80, 100};
        std::vector<int> ar3 = {3, 4, 15, 20, 30, 70, 80, 120};

        std::vector<int> finalList = findCommonElements(ar1, ar2, ar3);

        for (int num : finalList)
        {
            std::cout << num << " ";
        }
    }
    {
        int input_array[] = {1, 2, 3, 4, 4, 4, 4};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#8 Check for Majority Element in a sorted array" << std::endl;
        // Given an array arr of N elements,  A majority element in an array arr of size N is an element that appears more than N/2 times in the array.
        //  1) linear search and update max count -O(n)
        //  2)binary search-O(log n) @
        std::cout << "x=3 is majority?: " << _binarySearch(input_array, 0, size, 3) << std::endl;
    }
    {
        int input_array[] = {1, 2, 4, 6, 3, 7, 8};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#9 Find the Missing Number for first n integers in the array" << std::endl;
        // 1)sum of n natural numbers and optimise @
        // 2)visit each element using hashing
        // 3)Xor-Time Complexity: O(N)@
        // // Auxiliary Space: O(1)
        //     XOR has certain properties

        // Assume a1 ⊕ a2 ⊕ a3 ⊕ . . . ⊕ an = a and a1 ⊕ a2 ⊕ a3 ⊕ . . . ⊕ an-1 = b
        // Then a ⊕ b = an
        std::cout << "Missing number: " << getMissingNo(input_array, size) << std::endl;
    }
    {
        int input_array[] = {2, 3, 5, 4, 5, 2, 4,
                             3, 5, 2, 4, 4, 2};
        int size = sizeof(input_array) / sizeof(input_array[0]);
        std::cout << std::endl;
        std::cout << "#10 Find the Number Occurring Odd Number of Times" << std::endl;
        // 1)hash map-O(n),Auxiliary Space: O(n)
        // 2)XOR-O(n),Auxiliary Space: O(1)
        // x^0 = x
        // x^y=y^x (Commutative property holds)
        // (x^y)^z = x^(y^z) (Distributive property holds)
        // x^x=0
        std::cout << "Number Occurring Odd Number of Times: " << getOddOccurrence(input_array, size) << std::endl;
    }
}