/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution 
{    
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) 
    {    
        int sum=0, carry=0, act_num=0, l1v, l2v;
        ListNode head = null;
        ListNode temp = null;
        
        while(l1!=null || l2!=null)
        {
            l1v = ( l1!=null ? l1.val : 0 );
            l2v = ( l2!=null ? l2.val : 0 );
            sum     = l1v + l2v + carry;
            carry   = sum/ 10;
            act_num = sum % 10;
            ListNode node = new ListNode(act_num);
            
            if(temp == null)
                temp = head = node;               
            else
            {
                temp.next = node;
                temp = temp.next;
            }
            
            l1 = (l1 == null ? l1 : l1.next);
            l2 = (l2 == null ? l2 : l2.next);
        }
        
        if(carry!=0)
        {
            ListNode node = new ListNode(carry);
            if(temp == null)
                temp = head = node;               
            else
            {
                temp.next = node;
                temp = temp.next;
            }
        } 
        return head;
        
    }
}