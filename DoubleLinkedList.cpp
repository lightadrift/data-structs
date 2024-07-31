// em uma double list nós mantemos 3 fields. um pra data, um pro próximo node na
// lista e um pro node prévio

#include <iostream>
#include <ostream>
struct Node {
public:
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};

struct DoubleLinkedList {
private:
  Node *head;

public:
  int getLength() {
    int count = 0;
    Node *current = head;
    while (current != nullptr) {
      count++;
      current = current->next;
    }
    return count;
  };
  void printList() {
    Node *temp = head;
    while (temp != nullptr) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
  void insertAtBeginning(int value) {
    Node *temp = new Node(value);
    if (head == nullptr) {
      head = temp;
      return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
  }

  void insertAtTail(int value) {
    Node *temp = new Node(value);
    if (head == nullptr) {
      head = temp;
      return;
    };

    Node *current = head;

    while (current->next != nullptr) {
      current = current->next;
    }

    current->next = temp;
    temp->prev = current;
  }
};

int main() {
  int value = 1;
  DoubleLinkedList *list = new DoubleLinkedList();
  list->insertAtBeginning(10);
  list->insertAtBeginning(12);
  list->insertAtTail(8);
  list->printList();

  return 0;
}
