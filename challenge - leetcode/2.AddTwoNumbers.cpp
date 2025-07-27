// 2. Add Two Numbers
// You are given two non-empty linked lists representing two non-negative integers.
// The digits are stored in reverse order, and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#include <iostream>

using namespace std;

// A ListNode: a node contains other nodes and can repeat into a link of node, this example is single node link.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();
        ListNode *curr = dummy;
        int total = 0, carry = 0;

        // Traverse through both linked lists until either of them or the carry has a value
        while (l1 || l2 || carry)
        {
            // total = carry; // Reset total value for next result node
            int total = carry;
            // If l1 has value, add value to total and resposition current node to next node in l1 link
            if (l1)
            {
                total += l1->val;
                l1 = l1->next;
            }
            // If l2 has value, add value to total and resposition current node to next node in l2 link
            if (l2)
            {
                total += l2->val;
                l2 = l2->next;
            }

            carry = total / 10;                    // If total > 10
            curr->next = new ListNode(total % 10); // If total >10 then next node val = 1
            curr = curr->next;                     // Attach new node to result link
        }

        return dummy->next;
    }
};
int main()
{

    return 0;
}
