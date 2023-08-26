<!DOCTYPE html>
<html>
<head>
    <title>Longest K Unique Characters Substring</title>
</head>
<body>
    <h1>Longest K Unique Characters Substring</h1>
    <h2>Medium</h2>
    <p>This problem involves finding the size of the longest possible substring that contains exactly K unique characters within a given string. If no such substring exists, the function returns -1.</p>
    
    <h3>Example 1:</h3>
    <p><strong>Input:</strong><br>S = "aabacbebebe", K = 3</p>
    <p><strong>Output:</strong><br>7</p>
    <p><strong>Explanation:</strong><br>The longest substring with 3 distinct characters is "cbebebe".</p>
    
    <h3>Example 2:</h3>
    <p><strong>Input:</strong><br>S = "aaaa", K = 2</p>
    <p><strong>Output:</strong><br>-1</p>
    <p><strong>Explanation:</strong><br>There's no substring with 2 distinct characters.</p>
    
    <p><strong>Your Task:</strong> Implement the function <code>longestKSubstr(S: str, K: int) -&gt; int</code> that takes a string <code>S</code> and an integer <code>K</code> as input and returns the length of the longest substring with exactly K distinct characters. If no such substring exists, return -1.</p>
    <p><strong>Expected Time Complexity:</strong> O(|S|)<br><strong>Expected Auxiliary Space:</strong> O(|S|)</p>
    <p><strong>Constraints:</strong> 1 ≤ |S| ≤ 10^5, 1 ≤ K ≤ 26. All characters are lowercase Latin characters.</p>

    <h1>0-1 Knapsack Problem</h1>
    <h2>Medium</h2>
    <p>This problem involves selecting a subset of items from a list, each with associated weights and values, in a way that maximizes the total value while staying within a given knapsack's capacity. Each item can either be included or excluded (0-1 property).</p>
    
    <h3>Example 1:</h3>
    <p><strong>Input:</strong><br>N = 3<br>W = 4<br>values[] = {1, 2, 3}<br>weights[] = {4, 5, 1}</p>
    <p><strong>Output:</strong><br>3</p>
    
    <h3>Example 2:</h3>
    <p><strong>Input:</strong><br>N = 3<br>W = 3<br>values[] = {1, 2, 3}<br>weights[] = {4, 5, 6}</p>
    <p><strong>Output:</strong><br>0</p>
    
    <p><strong>Your Task:</strong> Implement the function <code>knapSack(W: int, wt: List[int], val: List[int], n: int) -&gt; int</code> that takes the maximum capacity <code>W</code>, weight array <code>wt[]</code>, value array <code>val[]</code>, and the number of items <code>n</code> as parameters, and returns the maximum possible value that can be obtained.</p>
    <p><strong>Expected Time Complexity:</strong> O(N*W)<br><strong>Expected Auxiliary Space:</strong> O(N*W)</p>
    <p><strong>Constraints:</strong> 1 ≤ N ≤ 1000, 1 ≤ W ≤ 1000, 1 ≤ wt[i] ≤ 1000, 1 ≤ val[i] ≤ 1000.</p>
</body>
</html>
