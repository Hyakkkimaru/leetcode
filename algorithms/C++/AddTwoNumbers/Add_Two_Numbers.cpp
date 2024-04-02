class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dum{0};
        auto curr = &dummy;
        auto carr = 0;
        
        while (l1 || l2 || carr) {
            auto a = l1? l1->val : 0, b = l2? l2->val : 0;
            auto val = carr + a + b;
            curr->next = new ListNode(val % 10);
            carr = val / 10;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
            curr = curr->next;
        }

        return dum.next;
    }
};
