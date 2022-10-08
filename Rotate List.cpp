class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return head;
        ListNode* temp=head;
        int cnt=1;
        while(temp->next){
            temp=temp->next;
            cnt++;
        }
        temp->next=head;
        k%=cnt;
        ListNode* next=NULL;
       ListNode* curr=head;
        for(int i=0;i<cnt-k-1;i++)
        {
            curr=curr->next;
        }
        next=curr->next;
        curr->next=NULL;
        return next;
    }
};

