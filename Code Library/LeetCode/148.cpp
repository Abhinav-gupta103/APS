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
        mergeSorting(&head);
        return head;
    }
    void mergeSorting(ListNode **head){
        ListNode* cur= *head;
        ListNode* first;
        ListNode* second;
        
        if(!cur or ! cur->next) return;
        
        FindMiddle(cur,&first,&second);
        mergeSorting(&first);
        mergeSorting(&second);
        *head=MergeBoth(first,second);
    }
    
    ListNode* MergeBoth(ListNode* first,ListNode* second){
        ListNode* answer=NULL;
        
        if(!first) return second;
        
        if(!second) return first;
        
        if(first->val <= second->val){
            answer=first;
            answer->next=MergeBoth(first->next,second);
        }
        else{
            answer=second;
            answer->next=MergeBoth(first,second->next);
        }
        return answer;
    }
    
    void FindMiddle(ListNode* cur,ListNode** first,ListNode** second){
        ListNode* fast=cur->next;
        ListNode* slow=cur;
        
        while(fast){
            fast=fast->next;
            if(fast){
                slow=slow->next;
                fast=fast->next;
            }
        }
        *first=cur;
        *second=slow->next;
        slow->next=NULL;
    }
};