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
     * @return {void}
     */
    reorderList(head) {
        let curr = head;
        let index = 0;
        let size = 0;
        let indecies = []
        while (curr) {
            size++;
            curr = curr.next;
        }
        let temp = head;
        while(temp){
            if((index * 2) <= (size-1)){
                indecies[index*2] = temp.val;
            }
            else if((index*2) > (size-1)){
                indecies[size - ((index*2)-(size-1))] = temp.val;
            }
            index++;
            temp = temp.next;
        }
        let tmp = head;
        for (let i = 0; i < indecies.length; i++) {
            tmp.val = indecies[i];
            tmp = tmp.next;
        }
        return head;
    }
}
