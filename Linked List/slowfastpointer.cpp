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
    bool hasCycle(ListNode *head) {
        // Edge case: an empty list or single node cannot have a cycle
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Move fast pointer by 2 steps and slow pointer by 1 step
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            // If they meet, a cycle exists
            if (slow == fast) {
                return true;
            }
        }
        
        // If fast reaches the end, there is no cycle
        return false;
    }
};
