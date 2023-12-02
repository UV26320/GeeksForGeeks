//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{

public:
    int isRepresentingBST(int arr[], int N)
    {
        int temp[N];

        // 1st of all we can create same as temp array using this copy function
        copy(arr, arr + N, temp);

        // then we can sort temp array
        sort(temp, temp + N);

        // and then we can check both arrays of its equal or not....
        if (equal(arr, arr + N, temp))
            return 1; // Array is sorted
        else
            return 0; // Array is not sorted
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.isRepresentingBST(arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends