class Solution 
{
    public:
    ListNode* insertLast(ListNode *ans, int val)
    {
        ListNode *ptr = new ListNode(val);
        if (ans == NULL)
        {
            ans = ptr;
            return ans;
        }
        ListNode *temp = ans;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        return ans;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* ans = NULL;
        while(list1 and list2)
        {
            if(list1->val <= list2->val)
            {
                ans = insertLast(ans, list1->val);
                list1 = list1->next;
            }
            else if(list2->val <= list1->val)
            {
                ans = insertLast(ans, list2->val);
                list2 = list2->next;
            }
        }
        while(list1)
        {
            ans = insertLast(ans, list1->val);
            list1 = list1->next;
        }
        while(list2)
        {
            ans = insertLast(ans, list2->val);
            list2 = list2->next;
        }
        return ans;
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