class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* prev=head;
        ListNode* curr=head->next;  
        while (curr && prev) {
            if (prev->val != curr->val) {
                prev = curr;
                curr = curr->next;
            }
            
            else {
                prev->next = curr->next;
                curr->next=nullptr;
                delete(curr);
                curr=prev->next;
            }
        }
        return head;
        
    }
};