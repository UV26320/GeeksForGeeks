#include <bits/stdc++.h>
using namespace std;


class Solution {
private:
    char rightturn(char c) { return (c == '9' ? '0' : c + 1); }
    char leftturn(char c) { return (c == '0' ? '9' : c - 1); }

    vector<string> nextoper(string s) {
        vector<string> ans;

        for (int i = 0; i < 4; ++i) {
            string copy = s;
            copy[i] = rightturn(s[i]);
            ans.push_back(copy);
            copy[i] = leftturn(s[i]);
            ans.push_back(copy);
        }
    }

public:
    int openLock(vector<string>& deadends, string target) {

        queue<string>q;
        unordered_map<string,bool>vis;
        q.push("0000");
        vis["0000"] = true;

        int level = 0;
        unordered_set<string> deadendSet (deadends.begin(), deadends.end());

       while (!q.empty())
       {
           int sz = q.size();
           while (sz--)
           {
            string 
           }
           
       }
       

    }
};