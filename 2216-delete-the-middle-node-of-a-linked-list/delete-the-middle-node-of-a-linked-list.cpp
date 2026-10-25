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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt=0;
        if(head==nullptr || head->next==NULL){
            return NULL;
        }
        ListNode*temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        ListNode*temp1=head;
        int N=(cnt/2)+1;
        while(N>2){
            temp1=temp1->next;
            N--;
        }
        ListNode*front=temp1->next;
        ListNode*last=front->next;
        front->next=NULL;
        temp1->next=last;
        delete front;
        return head;
    }
};