/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* reverse(ListNode *head)
        {
            ListNode *newhead = NULL;
            while (head != NULL)
            {
                ListNode *next = head->next;
                head->next = newhead;
                newhead = head;
                head = next;
            }
            return newhead;
        }
    

    ListNode* middle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    int pairSum(ListNode *head)
    {
        //for example our linked list is [1 2 3 4]
        ListNode *first = head;
        //find the middle of linked list using slow and fast pointer 
        //middle is 3 
        ListNode *second = middle(head);
        //we put 3 as head and reverse it now the linked list is [1,2,4,3]// 
        ListNode *third = reverse(second);
        
        
        int maxi = INT_MIN; 

        while (third != NULL)
        {
            int sum = (third->val) + (first->val);
            maxi = max(sum, maxi);
            third = third->next;
            first = first->next;
        }
        return maxi;
    }
};