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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;

    // pushing the values of the first linked list
    while (list1 != nullptr) {
        arr.push_back(list1->val);
        list1 = list1->next;
    }
  
    // pushing the values of the second linked list
    while (list2 != nullptr) {
        arr.push_back(list2->val);
        list2 = list2->next;
    }

    // sorting the vector
    sort(arr.begin(), arr.end());

    // creating a new list with sorted values
    ListNode* dummy = new ListNode(-1);
    ListNode* curr = dummy;

    for (int i = 0; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }

    return dummy->next;

    }
};
