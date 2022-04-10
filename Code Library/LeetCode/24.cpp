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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        
        int len=0;
        ListNode* first=head;
        ListNode* second=first->next;
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        while(second){
            ListNode* temp=second->next;
            first->next=second->next;
            second->next=first;
            prev->next=second;
            prev=first;
            if(temp){
                first=temp;
                second=temp->next;
            }
            else break;
        }
        return dummy->next;
    }
};