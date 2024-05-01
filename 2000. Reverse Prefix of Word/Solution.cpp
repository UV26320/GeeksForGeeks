#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {

        int n = word.find(ch);
        if (ch == -1)
            return word;
        int r0 = (n - 1) / 2;
        for (int i = 0; i <= r0; i++)
            swap(word[i], word[n - i]);
        return word;
    }
};