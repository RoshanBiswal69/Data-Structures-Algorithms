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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less = new ListNode(0);
        ListNode* great = new ListNode(0);

        ListNode* small = less;
        ListNode* large = great;

        while(head != nullptr){
            if(head->val < x){
                small->next = head;
                small = small->next;
            }else{
                large->next = head;
                large = large->next;
            }
            head= head->next;
        }

            large->next = NULL;
            small->next = great->next;
            return less->next;
        

    }
};