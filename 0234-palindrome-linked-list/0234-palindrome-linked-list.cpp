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
    bool isPalindrome(ListNode* head) {
    

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast && fast->next) slow = slow->next;
        ListNode *prev = nullptr;
        ListNode *temp = NULL;
        while(slow && slow->next){
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;

        }
        if(slow) slow->next = prev;
        fast = head;
        while(slow && fast){
            if(slow->val!= fast->val) return false;
        
        slow = slow->next;
        fast = fast->next;
        }
        return true;
    }
};