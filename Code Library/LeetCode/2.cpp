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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode(-1);
        ListNode* temp=res;
        int carry=0;
        while(l1 and l2){
            ListNode* temp2=new ListNode();
            int value=carry+l1->val+l2->val;
            if(value>=10){
                temp2->val=value-10;
                carry=1;
            }
            else{
                temp2->val=value;
                carry=0;
            }
            temp->next=temp2;
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            ListNode* temp2=new ListNode();
            int value=carry+l1->val;
            if(value>=10){
                temp2->val=value-10;
                carry=1;
            }
            else{
                temp2->val=value;
                carry=0;
            }
            temp->next=temp2;
            temp=temp->next;
            l1=l1->next;
        }
        while(l2){
            ListNode* temp2=new ListNode();
            int value=carry+l2->val;
            if(value>=10){
                temp2->val=value-10;
                carry=1;
            }
            else{
                temp2->val=value;
                carry=0;
            }
            temp->next=temp2;
            temp=temp->next;
            l2=l2->next;
        }
        if(carry==1){
            ListNode* temp2=new ListNode(1);
            temp->next=temp2;
        }
        return res->next;
    }
};