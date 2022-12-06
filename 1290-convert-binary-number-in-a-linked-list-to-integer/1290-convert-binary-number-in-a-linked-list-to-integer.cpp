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
int getDecimalValue(ListNode* head) {
    ListNode* iterate = head;
    string val = "";
    while (iterate) {
        val += to_string(iterate->val);
        iterate = iterate->next;
    }
    return stoi(val, 0, 2);
}
};