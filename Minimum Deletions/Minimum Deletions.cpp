//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// class Solution{
    
// //   private:
  
// //     int min(int x, int y) 
// // { 
// //   return (x < y) ? x : y; 
// // }
 
// // // Utility function for calculating
// // // Minimum element to delete
// // int utility_fun_for_del(string str, 
// //                           int i, int j)
// // {
// //     if (i >= j)
// //         return 0;
 
// //     // Condition to compare characters
// //     if (str[i] == str[j]) 
// //     {
 
// //         // Recursive function call
// //         return utility_fun_for_del(str, 
// //                                   i + 1, j - 1);
// //     }
 
// //     // Return value, incrementing by 1
// //     return 1 + min(utility_fun_for_del(str, i + 1, j),
// //                  utility_fun_for_del(str, i, j - 1));
// // }
       
//   public:
//     int minimumNumberOfDeletions(string S) { 
//         // code here
        
//         // return utility_fun_for_del(S, 0, 
//         //                       S.length() - 1);
        
        
//     } 
// };



class Solution {
public:
    int lcs(string &S, string &revS, int i, int j, vector<vector<int> > &dp) {
        if (i == -1 || j == -1)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (S[i] == revS[j])
            return dp[i][j] = 1 + lcs(S, revS, i - 1, j - 1, dp);

        int checkS = lcs(S, revS, i - 1, j, dp);
        int checkRevS = lcs(S, revS, i, j - 1, dp);
        return dp[i][j] = max(checkS, checkRevS);
    }

    int minimumNumberOfDeletions(string S) {
        int n = S.size();
        string revS = S;
        reverse(revS.begin(), revS.end());
        vector<vector<int> > dp(n, vector<int>(n, -1));

        return n - lcs(S, revS, n - 1, n - 1, dp);
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends