class Solution 
{
    public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* current  = head;
        ListNode* previous = head;
        
        while(n>0)
        {
            current = current->next;            
            n--;
        }
        
        if(current == NULL)              // it will mean that the node to be deleted was the end node
            return previous->next;        // from the end i.e. the very first node so its next node is result
        
        while(current->next != NULL)
        {
            current = current->next;
            previous = previous->next;
        }
        
        previous->next = (previous->next)->next;
        return head;
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