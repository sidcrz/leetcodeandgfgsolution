
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newhead=NULL;
        while(head!=NULL)
        {
            ListNode* next=head->next;
            head->next=newhead;
            newhead=head;
            head=next;
        }
        return newhead;
        
    }
};







