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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dum = new ListNode(0);
        ListNode* cur = dum;
        
        int carry;
        
        while(l1||l2||carry)
        {
            int value1 = l1? l1->val:0;
            int value2 = l2? l2->val:0;
            
            int curval = value1+value2+carry;
            
            ListNode* node = new ListNode(curval%10);
            carry = curval/10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            cur->next = node;
            cur = cur->next;
        }
        return dum->next;
    }
};
