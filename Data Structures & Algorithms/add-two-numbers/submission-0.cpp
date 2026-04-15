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
        
        ListNode* result = new ListNode();
        ListNode* current = result;

        int carry = 0;

        while(l1 != nullptr || l2 != nullptr){
            int a = 0;
            int b = 0;

            if(l1 != nullptr) 
                a = l1->val;
            else 
                a = 0;

            if(l2 != nullptr) 
                b = l2->val;
            else 
                b = 0;
            
            int sum = (a + b + carry) % 10;
            carry = (a + b + carry) / 10;
            
            ListNode* node = new ListNode(sum);

            current->next = node;

            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;

            current = current->next;
        }

        if(carry > 0){
            ListNode* node = new ListNode(carry);
            current->next = node;
        }

        return result->next;

    }
};
