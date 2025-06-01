#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class S {
    int getLength(ListNode* head) {
        int length = 0;
        while (head) {
            length++;
            head = head->next;
        }
        return length;
    }
    
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int m = getLength(headA), n = getLength(headB);
        ListNode* l1 = headA, *l2 = headB;
        
        if (m < n) {
            swap(m, n);
            swap(l1, l2);
        }
        
        while (m-- > n) {
            l1 = l1->next;
        }
        
        while (l1 && l1 != l2) {
            l1 = l1->next;
            l2 = l2->next;
        }
        
        return l1;
    }
};

// Helper function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating two linked lists with an intersection
    ListNode* common = new ListNode(8);
    common->next = new ListNode(10);

    ListNode* headA = new ListNode(3);
    headA->next = new ListNode(6);
    headA->next->next = new ListNode(9);
    headA->next->next->next = common;

    ListNode* headB = new ListNode(5);
    headB->next = common; // Intersection starts here

    // Printing the lists
    cout << "L-1: ";
    printList(headA);
    cout << "L-2: ";
    printList(headB);

    // Finding intersection
    Solution solution;
    ListNode* intersection = solution.getIntersectionNode(headA, headB);

    // if (intersection) {
    //     cout << "Intersection at node with value: " << intersection->val << endl;
    // } else {
    //     cout << "No intersection found." << endl;
    // }

    return 0;
}