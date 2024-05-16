


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