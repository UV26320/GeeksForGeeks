class Solution {
private:
    int solve(int n, vector<int>& memo) {
        // base cases
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        
        // check if already calculated
        if (memo[n] != -1)
            return memo[n];
        
        // calculate Tribonacci recursively
        memo[n] = solve(n-1, memo) + solve(n-2, memo) + solve(n-3, memo);
        return memo[n];
    }

public:
    int tribonacci(int n) {
        // Initialize memoization array
        vector<int> memo(n + 1, -1);
        return solve(n, memo);
    }
};
