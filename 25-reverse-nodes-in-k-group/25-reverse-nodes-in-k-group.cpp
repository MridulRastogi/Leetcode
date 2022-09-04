class Solution 
{
    public:
   
    ListNode* reverseKNodes(ListNode* &head, int k)
    {
        ListNode* prevptr = NULL;
        ListNode* currptr = head;
        ListNode* nextptr;
        
        ListNode* check = currptr;
        
        int counter = 1;
        
        while(check->next != NULL and counter <= k)
        {
            counter++;
            check = check->next;
        }
                
        if(counter < k)
            return head;
        counter = 0;
        
        while(currptr != NULL and counter < k)
        {
            nextptr       = currptr->next;
            currptr->next = prevptr;
            prevptr       = currptr;
            currptr       = nextptr;
            counter++;
        }

        if(nextptr != NULL)
            head->next = reverseKNodes(nextptr, k);
        return prevptr;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode* new_head = reverseKNodes(head, k);
        return new_head;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */