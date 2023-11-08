//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int checkRedundancy(string &s)
    {
        // code here

        stack<int> st;

        for (int i = 0; i < s.length(); ++i)
        {

            char ch = s[i];

            if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                st.push(ch);
            }
            else
            {

                // ch ya toh ')' hai orr lowercase letter

                if (ch == ')')
                {
                    bool isRedundant = true;

                    while (st.top() != '(')
                    {
                        char top = st.top();
                        if (top == '+' || top == '-' || top == '*' || top == '/')
                        {
                            isRedundant = false;
                        }

                        st.pop();
                    }

                    if (isRedundant)
                        return true;
                    st.pop();
                }
            }
        }

        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        string s;
        cin >> s;

        Solution obj;
        int res = obj.checkRedundancy(s);

        cout << res << endl;
    }
}

// } Driver Code Ends