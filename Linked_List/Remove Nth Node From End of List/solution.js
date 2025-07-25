/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} head
     * @param {number} n
     * @return {ListNode}
     */
    removeNthFromEnd(head, n) {
        let size = 0;
        let curr = head;
        while(curr !== null){
            size++;
            curr = curr.next;
        }
        // now curr is null and i have the size
        let idx = size -n - 1;
        curr = head;
        if (size === n){
            head = head.next;
            return head;
        }
        while(idx--){
            curr = curr.next;
        }
        curr.next = curr.next.next;
        return head;
    }
}
