//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        map<int, int> ans;
        // for(int i =0 ; a[i] != '\0'; ++i) ans[a[i]]++;
        for (int i = 0; i < size; ++i)
            ans[a[i]]++;

        for (auto it = ans.begin(); it != ans.end(); ++it)
        {

            if (it->second > (size) / 2)
                return it->first;
        }

        return -1;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends