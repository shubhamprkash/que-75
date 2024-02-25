class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*n=head,*p=head,*b=head;
        while(p&&p->next){
            if(n!=head)b=b->next;
            n=n->next;
            p=p->next->next;
        }
        if(n==head)return n->next;
        b->next=n->next;
        return head;
        
    }
};
