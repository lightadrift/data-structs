#include <iostream>
#include <ostream>

class Node {
public:
  int data;

  Node *next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

class LinkedList {
private:
  Node *head;

public:
  LinkedList() { this->head = nullptr; }

  void insertAtBeginning(int value) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  };

  void insertAtEnd(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = newNode;
      return;
    }

    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
  };

  void insert(int value, int pos) {
    if (pos > this->getListLength() - 1 || pos < 0) {
      std::cout << "Invalid Pos" << std::endl;
    } else {
      Node *temp = new Node(value);
      Node *temp2 = head;
      for (int i = 0; i < pos - 1; i++) {
        temp2 = temp2->next;
      }
      temp->next = temp2->next;
      temp2->next = temp;
    }
  };

  void deleteAt(int pos) {
    Node *temp = head;
    if (pos == 1) {
      head = temp->next;
      delete (temp);
      return;
    }

    for (int i = 0; i < pos - 2; i++) {
      temp = temp->next;
    }
    Node *temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
  };

  void traverseLinkedList() {
    Node *temp = head;
    while (temp != nullptr) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  };

  int getListLength() {
    int length = 0;
    Node *current = head;
    while (current != nullptr) {
      length++;
      current = current->next;
    };

    return length;
  }
};

int main() {
  LinkedList *list = new LinkedList();
  list->insertAtBeginning(10);
  list->insertAtBeginning(12);
  list->insertAtBeginning(14);
  list->insertAtBeginning(16);
  list->insert(24, 3);
  list->insert(5, 3);
  list->traverseLinkedList();
  printf("test \n");
  list->deleteAt(1);
  list->traverseLinkedList();
  return 0;
};
