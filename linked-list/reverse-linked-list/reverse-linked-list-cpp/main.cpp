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
    ListNode* nextNode = nullptr;
    ListNode* prevNode = nullptr;
    while (head) {
      nextNode = head->next;
      head->next = prevNode;
      prevNode = head;
      head = nextNode;
    }
    return prevNode;
  };
};

int main() {
  vector<int> list1{1, 2, 3, 4, 5};
  ListNode* head1{createLinkedList(list1)};
  printLinkedList(head1);
  ListNode* result1{Solution().reverseList(head1)};
  printLinkedList(result1);
  deleteLinkedList(head1);

  vector<int> list2{1, 2};
  ListNode* head2{createLinkedList(list2)};
  printLinkedList(head2);
  ListNode* result2{Solution().reverseList(head2)};
  printLinkedList(result2);
  deleteLinkedList(head2);

  vector<int> list3{};
  ListNode* head3{createLinkedList(list3)};
  printLinkedList(head3);
  ListNode* result3{Solution().reverseList(head3)};
  printLinkedList(result3);
  deleteLinkedList(head3);

  return 0;
}