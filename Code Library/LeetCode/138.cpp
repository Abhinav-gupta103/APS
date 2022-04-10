/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    void disp(Node* head){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        Node* node=head;
        while(node){
            Node* temp=node->next;
            node->next=new Node(node->val);
            node->next->next=temp;
            node=temp;
        }
        
        Node* temp=head;
        
        while(temp){
            if(temp->random){
                temp->next->random=temp->random->next;
            }
            else temp->next->random=NULL;
            temp=temp->next->next;
        }
        
        Node* ans=new Node(0);
        Node* helper=ans;

        while(head){
            helper->next=head->next;
            helper=helper->next;
            head->next=head->next->next;
            head=head->next;
        }
        return ans->next; 
    }
};