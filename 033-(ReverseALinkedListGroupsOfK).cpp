/*
Time complexity : O(N)
Space complexity : O(1)
*/
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL or k==1 ) return head;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode *curr,*prev,*nxt;
         curr = dummy;
         prev = dummy;
         nxt = dummy;
        
        ListNode* temp = head;
        int count=1;
        while(temp->next)
        {
            temp = temp->next;
            count++;
           
        }
        
        while(count >= k)
        {
            curr = prev->next;
            nxt = curr->next;
            for(int i=1;i<k;i++)
            {
                curr->next = nxt->next;
                nxt->next = prev->next;
                prev->next = nxt;
                nxt= curr->next;
                
            }
            prev = curr;
            count -=k;
        }
       
        return dummy->next;
        
    }
};
