#include <iostream>
#include <string>

//Reverse Linked List

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void show_list(const ListNode* head)
{
    while (head)
    {
        std::cout << head->val << '\n';
        head = head->next;
    }
}

class Solution
{
public:
ListNode* reverseList(ListNode* head)
{
    //0 -> 1 -> 2 -> 3
    //3 -> 2 -> 1 -> 0

    //0 -> 1
    // nullptr <- 0

    // 1 -> 2
    // 0 <- 1
    ListNode* previous = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;
    while (current)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
};


int main()
{

    ListNode* list = new ListNode(0);
    list->next = new ListNode(1);
    list->next->next = new ListNode(2);
    list->next->next->next = new ListNode(3);
    Solution solution;
    auto reverse = solution.reverseList(list);
    show_list(reverse);
}
