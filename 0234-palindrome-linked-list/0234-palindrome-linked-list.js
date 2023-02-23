/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
    var nodes = [];
    var iter = head;
    var len = 0;
    while (iter != null) {
        nodes.push(iter.val);
        iter = iter.next;
        len++;
    }
    for (let i = 0; i < len / 2; i++) {
        if (nodes[i] !== nodes[len - 1 - i]) {
            return false;
        }
    }
    return true;
};