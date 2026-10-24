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
        ListNode*front=node->next;
        ListNode* nxt=front->next;
        node->val=front->val;
        front->next=NULL;
        node->next=NULL;
        node->next=nxt;
      
    }
};