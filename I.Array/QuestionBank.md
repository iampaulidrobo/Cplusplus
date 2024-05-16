Question Bank:
https://www.geeksforgeeks.org/array-data-structure/array-searching/?ref=lbp



<details>
<summary>I.Program to find the minimum (or maximum) element of an array</summary>

### Intuition and Approach

```
Linear search
1)define int result=INT_MIN
2)with each iteration update the min/max between result and arr[i]
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(1)
```
</details>

<details>
<summary>II.Last duplicate element in a sorted array</summary>

### Intuition and Approach

```
Linear search
1)iterate backwards
2)compare and return if true
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(1)
```
</details>
<details>
<summary>III.Most frequent element in an array</summary>

### Intuition and Approach

```
Usually use hashmap to count the frequency in these types of problems
1)use unordered_map to store the element and its count
2)iterate through the array.
3)iterate through hashmap and take max count element
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(n)-for using unordered_map
```
```
Sorting
1)sort the array
2)update max_count varible with each iteration on the array
```

```ruby
Time Complexity: O(nlog(n)) 
Auxiliary Space: O(1)
```

An efficient solution to this problem can be to solve this problem by Moore’s voting Algorithm.

NOTE: THE ABOVE VOTING ALGORITHM ONLY WORKS WHEN THE MAXIMUM OCCURRING ELEMENT IS MORE THAN (SIZEOFARRAY/2) TIMES;
```
int maxFreq(int *arr, int n) { 
    //using moore's voting algorithm 
    int res = 0; 
    int count = 1; 
    for(int i = 1; i < n; i++) { 
        if(arr[i] == arr[res]) { 
            count++; 
        } else { 
            count--; 
        } 
          
        if(count == 0) { 
            res = i; 
            count = 1; 
        } 
          
    } 
      
    return arr[res]; 
} 
```
</details>
<details>
<summary>IV Find a Fixed Point (Value equal to index) in a given array</summary>

### Intuition and Approach

```
Linear search-O(n)
Binary search-O(logn)-Try using binary search for searching in sorted array always

```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(n)
```
</details>
<details>
<summary>V. Find the element that appears once in an array where every other element appears twice</summary>

### Intuition and Approach

```
//hashmap
//XOR
// 2*(sum_of_array_without_duplicates) – (sum_of_array) 
```

</details>
<details>
<summary>VI.Find common elements in three sorted arrays</summary>

### Intuition and Approach

```
//pull all arrays into hashset
//iterate over any one and use hashset.count(arr[i]) to check if the element exists
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(1)
```
</details>

<details>
<summary>VII.Check for Majority Element in a sorted array</summary>

### Intuition and Approach

```
//linear search
//binary search
//hashmap
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(1)
```
</details>

<details>
<summary>VIII.Find the Missing Number</summary>
Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.
### Intuition and Approach

```
//linear search
//double pointer check
//XOR-    Assume a1 ⊕ a2 ⊕ a3 ⊕ . . . ⊕ an = a and a1 ⊕ a2 ⊕ a3 ⊕ . . . ⊕ an-1 = b
    Then a ⊕ b = an
```

</details>

<details>
<summary>IX.Find the Number Occurring Odd Number of Times</summary>

### Intuition and Approach

```
//hashmap
//@XOR-x^0 = x
x^y=y^x (Commutative property holds)
(x^y)^z = x^(y^z) (Distributive property holds)
x^x=0
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(1)
```
</details>

<details>
<summary>X.Find the first repeating element in an array of integers</summary>

### Intuition and Approach

```
//sort and check
//@hashset
//hashing
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(1)
```
</details>

<details>
<summary>XI.Find lost element from a duplicated array</summary>

### Intuition and Approach

```
//binary search on unsorted array,wow.@
//XOR
```
```ruby
Time Complexity: O(logM + logN)(binary)
Auxiliary Space: O(1)
```
</details>
<details>
<summary>XII.Third largest element in an array of distinct elements</summary>

### Intuition and Approach

```
//sort and check

```
```ruby
Time Complexity: O(nlogn)
Auxiliary Space: O(1)
```
</details>
<details>
<summary>XIII.Find element in a sorted array whose frequency is greater than or equal to n/2.</summary>

### Intuition and Approach

```
//middle number @
```
```ruby
Time Complexity: O(1)
Auxiliary Space: O(1)
```
</details>
<details>
<summary>XIV.Consecutive steps to roof top-Given the heights of consecutive buildings, find the maximum number of consecutive steps one can put forward such that he gains an increase in altitude while going from the roof of one building to the next adjacent one.</summary>

### Intuition and Approach

```
//linear search to check in the subarray is increasing,reset 'count' when it decreases and store max value as answer.
```
```ruby
Time Complexity: O(n)
Auxiliary Space: O(1)
```

<details>

<summary>Array rotation</summary>

### You can add a header

```
1)storing the first element and shifting each element to previous one.Take stored to be fit in last
2)using temp array to occupy O(N) space.
3)juggling
4)Reversal:
void rotateArray(vector<int>& arr, int d)
{
    // Find the size of the array
    int n = arr.size();
 
    // Mod k with the size of the array
    // To handle the case where k is greater than the size
    // of the array
    d %= n;
 
    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + d);
 
    // Reverse the remaining n-k elements
    reverse(arr.begin() + d, arr.end());
 
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}
 
```

```ruby
   puts "Hello World"
```

</details>

