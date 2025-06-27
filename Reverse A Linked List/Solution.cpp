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
    ListNode* reverseList(ListNode* head) {
        // Base case: empty list or one node
        if (head == nullptr || head->next == nullptr)
            return head;

        // Recurse on the rest of the list
        ListNode* newHead = reverseList(head->next);

        // Reverse the link
        head->next->next = head;
        head->next = nullptr;

        return newHead;
    }
};
