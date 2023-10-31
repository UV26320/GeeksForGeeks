//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
// 	    Pointer i is used to iterate through the array and move non-zero elements to the front of the array.
// Pointer j keeps track of the position where we should place the next non-zero element.
// Once we have moved all non-zero elements to the front, I fill the remaining positions with zeroes.
	    
	    int i = 0 ;
	    
	    for(int j = 0 ; j <n ; ++j){
	        if(arr[j]){
	            arr[i] = arr[j];
	            i++;
	        }
	    }
	    
	    for(;i< n ; ++i){
	        arr[i]=0;
	    }
	    
	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends