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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        vector<int> v;
        ListNode* current = head;

        while(current != nullptr){
            v.push_back(current->val);
            current = current->next;
        }
        
        int size = v.size();
        v.erase(v.begin() + size - n);
        if(v.size() == 0) return nullptr;

        ListNode* h = new ListNode(v[0]);
        ListNode* c = h;

        for(int i = 1; i < v.size(); i++){
            ListNode* node = new ListNode(v[i]);
            c->next = node;
            c = node;
        }
        
        return h;
    }
};
