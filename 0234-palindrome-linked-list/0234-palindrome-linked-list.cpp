/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:

        ListNode* reverse(ListNode *head)
        {
            if (head == NULL || head->next == NULL)
            {
                return head;
            }

            ListNode *curr = head, *prev = NULL, *next = NULL;
            while (curr != NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }

    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *mid = slow;
        mid->next = reverse(mid->next);

        ListNode *start = head;
        mid = mid->next;
        while (mid != NULL)
        {
            if (start->val != mid->val)
                return false;
            mid = mid->next;
            start = start->next;
        }
        return true;
    }
};