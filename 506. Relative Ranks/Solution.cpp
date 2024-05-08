#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        // sort a rank into descending order i.e 10,9,8,4,3
        vector<int> sortedScore = score;
        sort(sortedScore.begin(), sortedScore.end(), greater<int>());

        vector<string> medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};

        unordered_map<int, string> rankMapping;
        for (int i = 0; i < sortedScore.size(); i++)
        {
            if (i < 3)
            {
                rankMapping[sortedScore[i]] = medals[i];
            }
            else
            {
                rankMapping[sortedScore[i]] = to_string(i + 1); // here we can i+1 do bcz of supposed array is 10,9,8,4,3
                                                                // this and 3 is in array 4th index(0 based indexing) but 
                                                                // actually his rank is 5th so thats why we can 
                                                                // pluse a one into index ---> 3 element ==> 4th index + 1 = 5th rank
                                                                
            }
        }
        vector<string> result;
        for (int s : score)
        {
            result.push_back(rankMapping[s]);
        }
        return result;
    }
};