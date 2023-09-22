//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array

    int equilibriumPoint(long long a[], int n)
    {
        long long sum1 = 0, sum2 = 0;

        // Calculate the total sum of the array
        for (int i = 0; i < n; ++i)
        {
            sum2 += a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            // Reduce the right sum by the current element
            sum2 -= a[i];

            if (sum1 == sum2)
            {
                return i + 1;
            }

            // Add the current element to the left sum
            sum1 += a[i];
        }

        // If no equilibrium point is found, return -1
        return -1;
    }

    // int equilibriumPoint(long long a[], int n) {

    //     // Your code here

    //     long long ans ,sum1 = 0 ,sum2 =0;

    //     for(int i = 0 , j = n  ; i < n , j>n ; ++i,--j){

    //         sum1 = a[i];
    //         sum2 = a[j];
    //         if(sum1==sum2){

    //              ans = a[i+1];
    //              return ans;
    //         }
    //     }
    // return -1;

    // }
};

//{ Driver Code Starts.

int main()
{

    long long t;

    // taking testcases
    cin >> t;

    while (t--)
    {
        long long n;

        // taking input n
        cin >> n;
        long long a[n];

        // adding elements to the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;

        // calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends