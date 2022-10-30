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
        vector<int> vec;
        ListNode* ans = NULL;
        while(list1)
        {
            vec.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2)
        {
            vec.push_back(list2->val);
            list2 = list2->next;
        }
        sort(vec.begin(), vec.end());
        for(int i:vec)
        {
            ans = insertLast(ans, i);
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