#include <bits/stdc++.h>
using namespace std;
int main()
{

    string Str;
    cout << " Enter a string" << endl;
    cin >> Str;

    stack<char> s;

    for (int i = 0; i < Str.length(); i++)
    {
        char ch = Str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "Answer is " << ans << endl;

    return 0;
}