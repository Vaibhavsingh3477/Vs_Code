/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // Create a dummy node
        ListNode* curr = dummy; // Set current node to dummy node
        int carry = 0; // Initialize carry to 0

        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry; // Calculate sum
            carry = sum / 10; // Update carry

            ListNode* newNode = new ListNode(sum % 10); // Create a new node with the value of sum % 10
            curr->next = newNode; // Set the next pointer of current node to the new node
            curr = newNode; // Move current node pointer to the new node

            if (l1) l1 = l1->next; // Move l1 pointer to the next node
            if (l2) l2 = l2->next; // Move l2 pointer to the next node
        }

        ListNode* result = dummy->next; // Store the result node
        delete dummy; // Delete the dummy node
        return result; // Return the result node
    }
};

// @lc code=end

