/*
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
    int size(ListNode* head){
        ListNode* temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 or head==NULL)return head;
        int len=size(head);
        k=k%len;
        if(k==0)return head;
        ListNode* temp=head;
        int rotate=len-k;
        while(rotate>1){
            temp=temp->next;
            rotate--;
        }
        ListNode* head2=temp->next;
        temp->next=NULL;
        ListNode* temp2=head2;
        while(temp2->next)
            temp2=temp2->next;
        temp2->next=head;
        return head2;
    }
};