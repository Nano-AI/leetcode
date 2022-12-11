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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        ListNode *slow = head, *fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *p = slow->next;
        slow->next = nullptr;
        ListNode *q = p->next;
        p->next = nullptr;
        while (q != nullptr) {
            ListNode *tmp = q->next;
            q->next = p;
            p = q;
            q = tmp;
        }
        while (p != nullptr) {
            if (p->val != head->val) return false;
            p = p->next;
            head = head->next;
        }
        return true;
    }
};