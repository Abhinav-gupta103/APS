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
    void reverseK(ListNode* curr,ListNode* next,ListNode* prev, int k){
            for(int i=1;i<k;i++){
                curr->next=next->next;
                next->next=prev->next;
                prev->next=next;
                next=curr->next;
            }
            return;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==1) return head;
        
        int len=0;
        ListNode* temp=head;
        while(temp)
        {
            temp=temp->next;
            len++;
        }

        ListNode *dummy = new ListNode(-1);
        dummy->next=head;

        ListNode* curr=head,*next=dummy,*prev=dummy;
        
        while(len>=k){
            curr=prev->next;
            next=curr->next;
            reverseK(curr,next,prev,k);
            prev=curr;
            len-=k;
        }
        return dummy->next;
    }
};