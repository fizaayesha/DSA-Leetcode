#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};
void traverse(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}
void deleteNode(Node *node)
{
    node->val = node->next->val;
    node->next = node->next->next;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *four = new Node();
    head->next = second;
    head->val = 1;
    second->next = third;
    second->val = 2;
    third->next = four;
    third->val = 3;
    four->next = NULL;
    four->val = 4;
    cout<<"Before deletion\n";
    traverse(head);

    deleteNode(third);

    cout<<"\nAfter deletion\n";
    traverse(head);
    return 0;
}