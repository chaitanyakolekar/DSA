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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*tempA=headA;
        ListNode*tempB=headB;
        if(tempA==tempB){
            return tempA;
        }
        if(tempA->next==tempB ){
            return tempA->next;
        }
        if(tempB->next==tempA){
            return tempA;
        }
        while(tempA!=NULL && tempB!=NULL){
            if(tempA->next==tempB->next){
                return tempA->next;
            }
             if(tempA==tempB){
            return tempA;
        }
        if(tempA->next==tempB ){
            return tempA->next;
        }
        if(tempB->next==tempA){
            return tempA;
        }
            tempA=tempA->next;
            if(tempA==NULL){
                tempA=headA;
                tempB=tempB->next;
            }
        }
        return NULL;
    }
};