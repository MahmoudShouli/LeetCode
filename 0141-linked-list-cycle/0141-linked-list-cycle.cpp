/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr)
            return false;
        
        ListNode *p1 = head;
        ListNode *p2 = head->next;
        
        while(p1 < p2){
            if(p2->next == nullptr) return false;
            else
                p1 = p1->next;
                p2 = p2->next;
        }
        
      return true;
    }
};