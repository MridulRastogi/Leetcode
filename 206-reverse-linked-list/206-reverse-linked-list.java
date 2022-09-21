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
class Solution {
    public ListNode reverseList(ListNode head) 
    {
        ListNode prevptr = null;
        ListNode currptr = head;
        ListNode nextptr;
        
        while(currptr != null)
        {
            nextptr = currptr.next;
            currptr.next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        head = prevptr;
        return head;
    }
}