


<details>
<summary>I.Print numbers from 1-N using recusrsion</summary>

### Intuition and Approach

```
1)Base condition to stop the loop
2)repeated calling function
3)Backtracking

int fib(int n,int &sum)
{
    if (n <= 1)
        return n;
    int result = fib(n - 1,sum) + fib(n - 2,sum);

   // sum=sum+result; cannot have this covered as we are calling the recursion function two times
   //can be improved using dp(dynamic programming) to mark the visited sectoin
    return result;
}
int f(int n) 
{ 
    // Stop condition 
    if (n == 0 || n == 1) 
        return 1; 
  
    // Recursive condition 
    else
        return n * f(n - 1); 
} 
```

</details>

<details>
<summary>II.Factorial for the number</summary>

### Intuition and Approach

```
#include<iostream> 
using namespace std;

int factorial(int n) {
    
    //base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main() {

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}
```
</details>

<details>
<summary>III.Subsets</summary>

### Intuition and Approach

```

class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return ;
        }
        
        //exclude
        solve(nums, output, index+1, ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
        
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
        
    }
};
```

</details>

<details>
<summary>I.Print numbers from 1-N using recusrsion</summary>

### Intuition and Approach

```
1)Base condition to stop the loop
2)repeated calling function
3)Backtracking

int fib(int n,int &sum)
{
    if (n <= 1)
        return n;
    int result = fib(n - 1,sum) + fib(n - 2,sum);

   // sum=sum+result; cannot have this covered as we are calling the recursion function two times
   //can be improved using dp(dynamic programming) to mark the visited sectoin
    return result;
}
int f(int n) 
{ 
    // Stop condition 
    if (n == 0 || n == 1) 
        return 1; 
  
    // Recursive condition 
    else
        return n * f(n - 1); 
} 
```
```ruby
Time Complexity: O(2n)
Auxiliary Space: O(n)
```
</details>