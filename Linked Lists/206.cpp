#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
};
ListNode *reverseList(ListNode *head)
{
    ListNode *current = head;
    ListNode *prev = NULL;
    ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void traverse(ListNode *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}
int main()
{
    ListNode *head = new ListNode();
    ListNode *second = new ListNode();
    ListNode *third = new ListNode();
    ListNode *four = new ListNode();
    head->next = second;
    head->val = 1;
    second->next = third;
    second->val = 2;
    third->next = four;
    third->val = 3;
    four->next = NULL;
    four->val = 4;
    cout << "Before Reversing\n";
    traverse(head);
    cout << "\nAfter Reversing\n";
    head = reverseList(head);

    traverse(head);
    return 0;
}