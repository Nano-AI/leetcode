    ListNode *next;                                        /**
    ListNode() : val(0), next(nullptr) {}                   * Definition for singly-linked list.
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/*




 */
// @lc code=start
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head, *fast = head;
        while (n--) fast = fast->next;
        if (fast == nullptr) return head->next;
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head; 
    }
};