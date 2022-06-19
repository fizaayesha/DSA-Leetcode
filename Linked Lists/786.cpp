#include <iostream>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;

public:
    int getLength(ListNode *head)
    {
        ListNode *ptr = head;
        int count = 0;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        int n = getLength(head);
        int ans = n / 2;
        int count = 0;
        ListNode *ptr = head;
        while (count < ans)
        {
            ptr = ptr->next;
            count++;
        }
        return ptr;
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
    head->data = 3;
    second->next = third;
    second->data = 2;
    third->next = four;
    third->data = 0;
    four->next = second;
    four->data = 4;
    head = ls.middleNode(head);
    cout << head;
    return 0;
}