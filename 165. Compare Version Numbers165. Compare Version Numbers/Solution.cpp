#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {

        int i = 0, j = 0;
        int v1Len = version1.size(), v2Len = version2.size();
        int n1, n2;
        while (i < v1Len || j < v2Len) {
            n1 = 0;
            n2 = 0;
            while (i < v1Len && version1[i] != '.') {
                // here this code < v1[i] - '0' > convert string to integer like
                // in ex. --> '4' - '0' = 4
                n1 = n1 * 10 + (version1[i] - '0');
                i++;
            }
            while (j < v2Len && version2[j] != '.') {
                n2 = n2 * 10 + (version2[j] - '0');
                j++;
            }
            if (n1 < n2)
                return -1;
            else if (n1 > n2)
                return 1;
            i++;
            j++;
        }
        return 0;
    }
};