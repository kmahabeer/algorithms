#include <iostream>
#include <vector>

using namespace std;

//  Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    ListNode *nextNode, *prevNode = nullptr;

    return prevNode;
  };
};

int main() {
  // Create the nodes
  ListNode* node1 = new ListNode(1);
  ListNode* node2 = new ListNode(2);
  ListNode* node3 = new ListNode(3);
  ListNode* node4 = new ListNode(4);
  ListNode* node5 = new ListNode(5);

  // Connect the nodes to form a linked list
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;

  // Set the head of the linked list
  ListNode* head = node1;

  // Traverse and print out the linked list
  ListNode* current = head;
  while (current != nullptr) {
    cout << current->val << " ";
    current = current->next;
  }

  // Clean up memory
  current = head;
  while (current != nullptr) {
    ListNode* temp = current;
    current = current->next;
    delete temp;
  }

  return 0;
}