//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k)
    {
        // code here
        
        // 1st approach is

        //     map<int,int>ans;

        //     for(int i = l ; i <=r ; ++i) ans[arr[i]]++;

        //     int count = 0;

        //     for(auto it = ans.begin() ; it != ans.end() ; ++it){

        //         count += it->second ;

        //         if(count >= k) return it->first;

        //     }

        // return -1;

        // 2nd approach is
        sort(arr + l, arr + r + 1);

        for (int i = l; i <= r; ++i)
        {
            if (i - l + 1 == k)
            {
                return arr[i];
            }
        }

        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int number_of_elements;
        cin >> number_of_elements;
        int a[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
            cin >> a[i];

        int k;
        cin >> k;
        Solution ob;
        cout << ob.kthSmallest(a, 0, number_of_elements - 1, k) << endl;
    }
    return 0;
}
// } Driver Code Ends