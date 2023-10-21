# Sum of all divisors from 1 to n

## Easy | Accuracy: 43.37%

<p>Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.</p>

# Example 1:

```bash
Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15
```

# Example 2:

```bash
Input:
N = 5
Output:
21
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6
ans = F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6
    = 21
```

<hr>

<span>Your Task:</span>  
<p>You don't need to read input or print anything. Your task is to complete the function sumOfDivisors() which takes an integer N as an input parameter and returns an integer.</p>


```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 106
```


