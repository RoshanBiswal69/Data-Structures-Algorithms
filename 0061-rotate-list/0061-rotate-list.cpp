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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return head;
        int n = 1;

        ListNode* temp= head;
     ListNode* curr = head;

        while( curr->next != nullptr) {
                    curr = curr->next;
                    n++;
        }
        k = k%n;
        curr->next = head;
        curr = temp->next;
       
        int count = 0;
        
        int l = n-k;
        while(l>1){
              temp = temp->next;
              l--;
        }
          head =temp->next;
        temp->next = nullptr;
       

        return head;
    }
};