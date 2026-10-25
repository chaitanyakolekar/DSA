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
    ListNode* reverseList(ListNode* head) {
        ListNode*temp=head;
        if(head==NULL){
            return NULL;
        }
        vector<int>ans;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size();
        ListNode*nwhead=new ListNode(ans[n-1]);
        ListNode*front=nwhead;
        for(int i=n-2;i>=0;i--){
            ListNode*nw=new ListNode(ans[i]);
            front->next=nw;
            front=nw;
        }
        return nwhead;
    }
};