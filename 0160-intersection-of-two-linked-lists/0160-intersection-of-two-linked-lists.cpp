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
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
    if(heada==NULL||headb==NULL)
    {
        return NULL;
    }
    
        ListNode* a=heada;
         ListNode* b=headb;
        
        while(a!=b)
        {
            if(a==NULL)
            {
                a=headb;
            }
            else
            {
                a=a->next;
            }
            
             if(b==NULL)
            {
                b=heada;
            }
            else
            {
                b=b->next;
            }
            
            
            
        }
        return a;
    }
        
        
        
};