/*
Time complexity : O(N+M) , where n and m are the sizes of the two sorted linked lists.
Space complexity : O(1)
Algo :  Create a node type pointer Last(merger) which actually merges the two linkes lists,
        Firstly check if any one of the linked list is null or not.
        if both of them are not null fix the position of the head(beginning of the merged list)
        also place last to the head and increase head1/ head2 accordingly.
        compare the values between head1 and head2 and use Last pointer to merge the list.
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node* head =NULL;
    Node* last =NULL;
    if(head_A->data < head_B->data)   
    {
        head=head_A;
        head_A =head_A->next;
        
    }
    else
    {
        head=head_B;
        head_B =head_B->next;
    }
    last =head;
    while(head_A!=NULL and head_B!=NULL)
    {
        if(head_A->data < head_B->data)   // 5 10 15 40   // 2 3 20
        {
            last->next =head_A;
            last= head_A;
            head_A = head_A->next;
            
        }
        else
        {
           last->next =head_B;
           last = head_B;
           head_B = head_B->next;
        }
    }
    if(head_B) last->next = head_B;
    if(head_A) last->next = head_A;
      
      return head;
}  
