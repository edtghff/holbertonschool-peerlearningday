#include <stdio.h>

void printReverseRecursive(struct ListNode* head);
void printReverseNonRecursive(struct ListNode* head);

struct ListNode {
int val;
struct ListNode* next;
};

int main()
{


}

void printReverseRecursive(struct ListNode* head)
{

    if (head == NULL)
    {
        return; // stop recursion when we reached the end of list
    }

    printReverseRecursive(head->next);
    printf("%d ", head->val);

}

void printReverseNonRecursive(struct ListNode* head)
{

}