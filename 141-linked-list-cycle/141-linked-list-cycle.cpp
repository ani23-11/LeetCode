/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
       ListNode *x = head;
        ListNode *y = head;

    while(y!=NULL&&y->next!=NULL)
    {
        y=y->next->next;
        x=x->next;
        if(x==y)
            return true;
    }
    return false;
}
};