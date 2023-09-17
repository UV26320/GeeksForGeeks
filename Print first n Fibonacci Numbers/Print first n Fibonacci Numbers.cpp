//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // int fibonacci(int n) {
    //     if (n <= 1)
    //     return n;

    // int previous = 0;
    // int current = 1;
    // int next;

    // for (int i = 2; i <= n; ++i) {
    //     next = previous + current;
    //     previous = current;
    //     current = next;
    // }

    // return current;
    // }

    // Function to return a vector containing the first n Fibonacci numbers.
    vector<long long> printFibb(int n)
    {
        vector<long long> fibNum(n);

        fibNum[0] = 1;

        if (n > 1)
            fibNum[1] = 1;

        for (int i = 2; i < n; ++i)
        {
            // fibNum.push_back(fibonacci(i));
            fibNum[i] = fibNum[i - 1] + fibNum[i - 2];
        }
        return fibNum;
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<long long> ans = obj.printFibb(n);

        // printing the elements of vector
        for (long long i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends