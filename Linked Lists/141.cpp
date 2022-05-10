#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class ListNode
{
public:
    int val;
    ListNode *next;

    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    ListNode ls;
    ListNode *head = new ListNode();
    ListNode *second = new ListNode();
    ListNode *third = new ListNode();
    ListNode *four = new ListNode();
    head->next = second;
    head->val = 3;
    second->next = third;
    second->val = 2;
    third->next = four;
    third->val = 0;
    four->next = second;
    four->val = 4;

    cout << ls.hasCycle(head);
    return 0;
}