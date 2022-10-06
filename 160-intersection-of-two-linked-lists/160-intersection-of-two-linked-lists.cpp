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
       
    ListNode* kl=heada;    
while(heada!=NULL)
{
    heada->val*=-1;
    heada=heada->next;
}
    heada=kl;    
while(headb!=NULL)
    {
    if(headb->val<0)
    {
        while(heada!=NULL)
{
    heada->val*=-1;
    heada=heada->next;
}
        return headb;
    }
    headb=headb->next;
}
      while(heada!=NULL)
{
    heada->val*=-1;
    heada=heada->next;
}   
return NULL;
    }
    

         
     
        
    
};