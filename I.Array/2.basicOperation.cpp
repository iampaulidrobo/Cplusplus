
#include <iostream>

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
}
void insertElement(int arr[], int len, int x, int pos)
{ //@start from end
    for (int i = len-1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
    printArray(arr, len);
}
void deleteElement(int arr[], int len, int pos)
{
    for (int i = pos; i < len-1; i++)
        arr[i] = arr[i + 1];
    arr[len-1]=0;
    printArray(arr, len);
}
int findElement(int arr[], int len, int element)
{
    for (int i = 0; i < len; i++){
        if (arr[i] == element)
            return i;
    }
    // If the key is not found
    return -1;
}

// Time Complexity:

// Operation |Best Case |Average Case |Worst Case
// Traversal |Ω(N)      |θ(N)         |O(N)
// Insertion |Ω(1)      |θ(N)         |O(N)
// Deletion  |Ω(1)      |θ(N)         |O(N)
// Searching |Ω(1)      |θ(N)         |O(N)

// Space Complexity:

// Operation |Best Case |Average Case |Worst Case
// Traversal |Ω(1)      |θ(1)         |O(1)
// Insertion |Ω(1)      |θ(N)         |O(N)
// Deletion  |Ω(1)      |θ(N)         |O(N)
// Searching |Ω(1)      |θ(1)         |O(1)

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // Operations on Array:
    // 1. Array Traversal:traversing through the 'for' loop and printing values from the array
    std::cout << "#1Traversing and printing the elements of the array" << std::endl;
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);

    // 2.Insertion in Array :shift elements after that positin and then insert the relevant element
    std::cout << std::endl;
    std::cout << "#2Insertion of element at particular position" << std::endl;
    int element = 1000;
    int pos = 3;
    insertElement(arr, len, element, pos);

    // 3.Deletion in Array :go to the respective pos and overwrite the values with the next value
    std::cout << std::endl;
    std::cout << "#3Deletion of element from particular position" << std::endl;
    deleteElement(arr, len, pos);

    // 4. Searching in Array :linear search and compare
    std::cout << std::endl;
    std::cout << "#4Linear search to find the pos of element in the array" << std::endl;
    len = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Element found at: " << findElement(arr, len, element);

    return 0;
}