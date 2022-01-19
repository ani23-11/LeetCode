class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a=list1, *b=list2, *head=NULL;
        while(a!=NULL && b!=NULL){
            if(a->val==b->val){
                ListNode* s=new ListNode;
                ListNode* t=new ListNode;
                s->val=a->val;
                t->val=a->val;
                if(head==NULL){
                    head=s;
                    s->next=t;
                    t->next=NULL;
                }
                else{
                    ListNode* p=head;
                    while(p->next!=NULL)
                        p=p->next;
                    p->next=s;
                    s->next=t;
                    t->next=NULL;
                }
                a=a->next;
                b=b->next;
            }
            else if(a->val < b->val){
                ListNode* t=new ListNode;
                t->val=a->val;
                t->next=NULL;
                if(head==NULL){
                    head=t;
                }
                else{
                    ListNode* p= head;
                    while(p->next!=NULL)
                        p=p->next;
                    p->next=t;
                }
                a=a->next;
            }
            else{
                ListNode* t= new ListNode;
                t->val=b->val;
                t->next=NULL;
                if(head==NULL){
                    head=t;
                }
                else{
                    ListNode* p= head;
                    while(p->next!=NULL)
                        p=p->next;
                    p->next=t;
                }
                b=b->next;
            }
        }
        if(a!=NULL){
            while(a!=NULL){
                if(head==NULL)
                    return list1;
                ListNode* t=new ListNode;
                t->val=a->val;
                t->next=NULL;
                ListNode*p=head;
                while(p->next!=NULL)
                    p=p->next;
                p->next=t;
                a=a->next;
            }
        }
        if(b!=NULL){
            if(head==NULL)
                return list2;
            while(b!=NULL){
                ListNode* t=new ListNode;
                t->val=b->val;
                t->next=NULL;   
                ListNode*p=head;
                while(p->next!=NULL)
                    p=p->next;
                p->next=t;
                b=b->next;
            }
        }
        return head;
    }
};