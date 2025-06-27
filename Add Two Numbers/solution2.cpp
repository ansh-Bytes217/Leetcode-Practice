class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int res = 0;
        ListNode* ans = new ListNode();
        ListNode* rst = ans;
        while(l1 || l2 || carry) {
            res = carry;
            if(l1) {
                res += l1->val;
                l1=l1->next;
            }
            if(l2) {
                res+=l2->val;
                l2=l2->next;
            }
            int digit = res%10;
            carry = res/10;
            ans->next = new ListNode(digit);
            ans = ans->next;
        }
        return rst->next;
        
    }

};
