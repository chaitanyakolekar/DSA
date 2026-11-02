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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int>ans;
        ListNode*temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode*nw=new ListNode(ans[0]);
        ListNode*nwhead=nw;
        for(int i=1;i<ans.size();i++){
            ListNode*nx=new ListNode(ans[i]);
            nw->next=nx;
            nw=nx;
        }
        return nwhead;
    }
};