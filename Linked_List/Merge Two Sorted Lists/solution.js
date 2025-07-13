class Solution {
    /**
     * @param {ListNode} list1
     * @param {ListNode} list2
     * @return {ListNode}
     */
    mergeTwoLists(list1, list2) {
        let curr1 = list1;
        let curr2 = list2;
        let res = new ListNode();
        let tail = res;

        while (curr1 || curr2) {

            // we should add newNode to append it to our list
            let newNode = new ListNode();
            if (curr1 && curr2) {
                if (curr1.val < curr2.val) {
                    newNode.val = curr1.val;
                    curr1 = curr1.next;
                } else {
                    newNode.val = curr2.val;
                    curr2 = curr2.next;
                }
            }
            else if (curr1) {
                newNode.val = curr1.val;
                curr1 = curr1.next;
            }

            else if (curr2) {
                newNode.val = curr2.val;
                curr2 = curr2.next;
            }
            // then at the end we should append this node and move the tail
            tail.next = newNode;
            tail = newNode;
        }
        return res.next;
    }
}
