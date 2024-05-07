#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
private:
    int solve(ListNode *head)
    {

        // base case
        if (head == nullptr)
            return 0;

        int value = head->val * 2 + solve(head->next);
        head->val = value % 10;
        
        // carry
        int ans = value / 10;
        return ans;
    }

public:
    ListNode *doubleIt(ListNode *head)
    {

        int carry = solve(head);
        if (carry)
            head = new ListNode(carry, head);
        return head;
    }
};