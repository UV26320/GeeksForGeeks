# Lucky Numbers
## Easy |  Accuracy: 30.35%

<p>Lucky numbers are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,</p>
<span>Take the set of integers</span>
<span>1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……</span>
<span>First, delete every second number, we get following reduced set.</span>
<span>1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………</span>
<span>Now, delete every third number, we get</span>
<span>1, 3, 7, 9, 13, 15, 19,….….</span>
<span>Continue this process indefinitely……</span>
<span>Any number that does NOT get deleted due to above process is called “lucky”.</span>

<p>You are given a number N, you need to tell whether the number is lucky or not. If the number is lucky return 1 otherwise 0.</p>


# Example 1:

```bash
Input:
N = 5
Output: 0
Explanation: 5 is not a lucky number 
as it gets deleted in the second 
iteration.
```

# Example 2:

```bash
Input:
N = 19
Output: 1
Explanation: 19 is a lucky number because 
it does not get deleted throughout the process.
```

<hr>

<span>Your Task:</span>
<p>You don't need to read input or print anything. You only need to complete the function isLucky() that takes N as parameter and returns either False if the N is not lucky else True.</p>


```bash
Expected Time Complexity: O(sqrt(N)).
Expected Auxiliary Space: O(sqrt(N)).

Constraints:
1 <= N <= 105
```