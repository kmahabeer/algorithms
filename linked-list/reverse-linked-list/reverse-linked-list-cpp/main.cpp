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

// Function to create singly linked list from a vector of integers
ListNode* createLinkedList(const vector<int>& elements) {
  ListNode* head = nullptr;
  ListNode* tail = nullptr;
  for (int element : elements) {
    ListNode* newNode = new ListNode(element);
    if (!head) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }
  return head;
}

// Function to print out the linked list
void printLinkedList(ListNode* head) {
  ListNode* current{head};
  while (current != nullptr) {
    cout << current->val << " ";
    current = current->next;
  }
  cout << endl;
}

// Function to delete the linked list and free memory
void deleteLinkedList(ListNode* head) {
  while (head != nullptr) {
    ListNode* temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;
  }
}

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    ListNode *nextNode, *prevNode = nullptr;

    return prevNode;
  };
};

int main() {
  vector<int> list1 = {1, 2, 3, 4, 5};
  ListNode* head{createLinkedList(list1)};

  printLinkedList(head);

  deleteLinkedList(head);

  return 0;
}