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
    void deleteNode(ListNode* node) {
        //*node=*node->next;
         ListNode*temp=node->next;
         node->val=temp->val;
         node->next=temp->next;
    }
};