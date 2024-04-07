# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {

        stack<int> stackIn;
        stack<int> starIn;

        for (int i = 0; i < s.length(); ++i) {

            if (s[i] == '(')
                stackIn.push(i);
            else if (s[i] == '*')
                starIn.push(i);
            else if (s[i] == ')') {
                if (stackIn.empty() && starIn.empty())
                    return false;
                else if (!stackIn.empty())
                    stackIn.pop();
                else
                    starIn.pop();
            }
        }

        while (!stackIn.empty()) {
            if (starIn.empty())
                return false;
            if (stackIn.top() > starIn.top())
                return false;
            stackIn.pop();
            starIn.pop();
        }

        return true;
    }
};