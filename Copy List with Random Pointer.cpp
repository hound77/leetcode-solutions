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
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL)
            return NULL;
        Node *curr=head;
        
        while(curr!=NULL)
        {
            Node *nxt = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next=nxt;
            curr=nxt;
        }
        
        Node *curr1=head, *curr2=head->next, *nh=head->next;
        
        while(curr1!=NULL)
        {
            if(curr1->random!=NULL)
                curr2->random=curr1->random->next;
            else
                curr2->random=NULL;
            curr1=curr1->next->next;
            if(curr2->next==NULL)
                curr2=curr2->next;
            else
                curr2=curr2->next->next;
        }
        
        curr1=head, curr2=head->next;
        while(curr1!=NULL)
        {
            curr1->next=curr1->next->next;
            if(curr2->next!=NULL)
                curr2->next=curr2->next->next;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
        return nh;
        
        // if(head==NULL)
        //     return NULL;
        // Node *curr=head;
        // while(curr!=NULL)
        // {
        //     Node *Next=curr->next;
        //     Node *temp=new Node(curr->val);
        //     curr->next=temp;
        //     temp->next=Next;
        //     curr=Next;
        // }
        // Node *curr1=head,*nh=head->next,*curr2=head->next;
        // while(curr1!=NULL && curr2!=NULL)
        // {
        //     if(curr1->random!=NULL)
        //         curr2->random=curr1->random->next;
        //     else
        //         curr2->random=NULL;
        //     curr1=curr1->next->next;
        //     if(curr2->next!=NULL)
        //         curr2=curr2->next->next;
        //     else
        //         curr2=curr2->next;
        // }
        // curr2=nh,curr1=head;
        // while(curr1!=NULL && curr2!=NULL)
        // {
        //     curr1->next=curr2->next;
        //     if(curr2->next!=NULL)
        //     {
        //         curr2->next=curr1->next->next;
        //         curr2=curr2->next;
        //     }
        //     else
        //         curr2=curr2->next;
        //     curr1=curr1->next;
        // }
        // return nh;
    }
};
