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
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {

        unordered_set<int> s;

        for (int x : nums) {
            s.insert(x);
        }

        int count = 0;
        ListNode* curr = head;

        while (curr != nullptr) {

            if (s.count(curr->val)) {

                if (curr->next == nullptr || 
                    !s.count(curr->next->val)) {
                    count++;
                }
            }

            curr = curr->next;
        }

        return count;
    }
};