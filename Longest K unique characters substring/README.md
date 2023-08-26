# Longest K Unique Characters Substring
## Medium
<div>
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
</div>
