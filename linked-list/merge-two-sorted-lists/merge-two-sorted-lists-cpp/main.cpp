#include <iostream>
#include <vector>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Function to create singly linked list from a vector of integers
ListNode* createLinkedList(const std::vector<int>& elements) {
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
    std::cout << current->val << " ";
    current = current->next;
  }
  std::cout << std::endl;
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
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    ListNode* list = new ListNode;
    if (list1->val > list2->val) {
      list = list2;
      list2 = list2->next;
    } else {
      list = list1;
      list1 = list1->next;
    }
    ListNode* currentNode = list;

    while (list1 && list2) {
      if (list1->val < list2->val) {
        currentNode->next = list1;
        list1 = list1->next;
      } else {
        currentNode->next = list2;
        list2 = list2->next;
      }
      currentNode = currentNode->next;
    }

    if (!list1)
      currentNode->next = list2;
    else
      currentNode->next = list1;
    return list;
  }
};

int main() {
  std::vector<int> list1a{1, 2, 4};
  std::vector<int> list1b{1, 3, 4};
  ListNode* head1a{createLinkedList(list1a)};
  ListNode* head1b{createLinkedList(list1b)};
  ListNode* result1{Solution().mergeTwoLists(head1a, head1b)};
  printLinkedList(result1);

  std::vector<int> list2a{};
  std::vector<int> list2b{};
  ListNode* head2a{createLinkedList(list2a)};
  ListNode* head2b{createLinkedList(list2b)};
  ListNode* result2{Solution().mergeTwoLists(head2a, head2b)};
  printLinkedList(result2);

  std::vector<int> list3a{};
  std::vector<int> list3b{0};
  ListNode* head3a{createLinkedList(list3a)};
  ListNode* head3b{createLinkedList(list3b)};
  ListNode* result3{Solution().mergeTwoLists(head3a, head3b)};
  printLinkedList(result3);
}