//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int isSumString(string S)
    {
        int n = S.size();

        auto sum = [](string a, string b) -> string
        {
            string ans = "";
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());

            int carry = 0;
            int index = 0;

            while (index < a.size() and index < b.size())
            {
                int sum = (a[index] - '0') + (b[index] - '0') + carry;
                carry = sum / 10;
                sum = sum % 10;

                ans += to_string(sum);
                ++index;
            }

            while (index < a.size())
            {
                int sum = (a[index] - '0') + carry;
                carry = sum / 10;
                sum = sum % 10;

                ans += to_string(sum);
                ++index;
            }

            while (index < b.size())
            {
                int sum = (b[index] - '0') + carry;
                carry = sum / 10;
                sum = sum % 10;

                ans += to_string(sum);
                ++index;
            }
            if (carry)
            {
                ans += to_string(carry);
            }
            reverse(ans.begin(), ans.end());

            return ans;
        };
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.isSumString(S) << endl;
    }
    return 0;
}

// } Driver Code Ends