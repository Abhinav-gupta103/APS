class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL){
            slow=slow->next;
            if(slow==NULL) return NULL;
            fast=fast->next->next;
            if(fast==NULL or fast->next==NULL)return NULL;
            if(slow==fast)break;
        }
        if(!fast or !slow)return NULL;
        fast=head;
        while(fast!=slow) {
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};