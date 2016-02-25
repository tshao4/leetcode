/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int curD;
        int carry = 0;
        ListNode *ans;
        ListNode *head = new ListNode(0);
        ans = head;
        
        ListNode *ll1 = l1;
        ListNode *ll2 = l2;
        
        while (ll1 && ll2) {
            curD = ll1->val + ll2->val + carry;
            if (curD > 9) {
                curD = curD - 10;
                carry = 1;
            }else {
                carry = 0;
            }
            
            head->next = new ListNode(curD);
            head = head->next;
            
            ll1 = ll1->next;
            ll2 = ll2->next;
        }
        
        while (ll1) {
           curD = ll1->val + carry;
            if (curD > 9) {
                curD = curD % 10;
                carry = 1;
            }else {
                carry = 0;
            }
            
            head->next = new ListNode(curD);
            head = head->next;
            
            ll1 = ll1->next;
        }
        
        while (ll2) {
           curD = ll2->val + carry;
            if (curD > 9) {
                curD = curD % 10;
                carry = 1;
            }else {
                carry = 0;
            }
            
            head->next = new ListNode(curD);
            head = head->next;
            
            ll2 = ll2->next;
        }
        
        if (carry) {
            head->next = new ListNode(1);
            head = head->next;
        }
        
        head = ans;
        ans = ans->next;
        delete head;
        
        return ans;
    }
};