#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
};
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    ListNode *current = head;
    ListNode *currentNext;
    while (current->next != NULL)
    {
        if (current->val == current->next->val)
        {
            currentNext = current->next;
            current->next = current->next->next;
            delete currentNext;
        }
        else
        {
            current = current->next;
        }
    }
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
    ListNode *five = new ListNode();
    head->next = second;
    head->val = 1;
    second->next = third;
    second->val = 2;
    third->next = four;
    third->val = 3;
    four->next = five;
    four->val = 3;
    five->next = NULL;
    five->val = 4;
    cout << "Before Reversing\n";
    traverse(head);
    cout << "\nAfter Reversing\n";
    head = deleteDuplicates(head);

    traverse(head);
    return 0;
}