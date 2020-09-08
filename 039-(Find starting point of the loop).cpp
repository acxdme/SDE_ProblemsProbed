/*
Time complexity : 
Space complexity :
Algorithm : Detect if there exist a loop or not using hare and tortoise Algorithm.
            reset slow pointers position to head and this time move both with same speed of 1.
            The position where the pointers meet is the starting point of the loop.
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        if(head ==NULL or head->next==NULL)
            return NULL;
        ListNode* slow=head;
        ListNode* fast= head;
        do
        {
            if(fast==NULL or fast->next==NULL )
                return NULL;
            fast=fast->next->next;
            slow=slow->next;
            
        }while(slow!=fast);
        
        slow=head;
        while(fast!=slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

          
