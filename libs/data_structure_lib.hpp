#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <cstddef>

template <typename T>
class LinkedListNode {
public:
    T data;
    LinkedListNode<T> *next;

    LinkedListNode(T val) : data(val), next(nullptr) {}
};

template <typename T>
class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() {
        while (head != nullptr) {
            LinkedListNode<T> *temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push_front(T val) {
        LinkedListNode<T> *new_node = new LinkedListNode<T>(val);
        new_node->next = head;
        head = new_node;
    }
    void print_list(const LinkedList<int>& list) {
    LinkedListNode<int>* current = list.head;
    
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    }
    

    T front() const {
        if (head != nullptr) {
            return head->data;
        } else {
            // TODO: handle this case more gracefully
            throw "LinkedList is empty";
        }
    }

    bool empty() const {
        return head == nullptr;
    }

private:
    LinkedListNode<T> *head;
};

#endif // LINKED_LIST_HPP
