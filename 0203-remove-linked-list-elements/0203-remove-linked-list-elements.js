/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function(head, val) {
    let out = new ListNode(0, head);
    let i = out;
    while (i.next) {
        if (i.next.val === val) {
            i.next = i.next.next;
        } else {
            i = i.next;
        }
    }
    return out.next;
};