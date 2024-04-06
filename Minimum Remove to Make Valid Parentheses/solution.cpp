class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {

        stack<int> st;

        for (int i = 0; i < s.length(); ++i)
        {

            if (s[i] == '(')
                st.push(i);
            else if (s[i] == ')')
            {
                if (!st.empty() && s[st.top()] == '(')
                    st.pop();
                else
                    s[i] = '*'; // Mark invalid closing parenthesis for removal
            }
        }

        while (!st.empty())
        {
            s[st.top()] = '*'; // Mark remaining unmatched opening parenthesis for removal
            st.pop();
        }

        // Remove marked characters
        s.erase(remove(s.begin(), s.end(), '*'), s.end());

        return s;
    }
};
