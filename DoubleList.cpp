#include "DoubleList.h"
#include "Node.h"
#include <iostream>
using namespace std;

// Konstruktor
DoubleList::DoubleList() {
    head = nullptr;
    tail = nullptr;
}

// Destruktor
DoubleList::~DoubleList() {
    clear();
}

// Dodawanie na początek
void DoubleList::addFront(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) { // Dla pustej listy
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// Dodawanie na koniec
void DoubleList::addBack(int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// Wyświetlanie
void DoubleList::display() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Czyszczenie listy
void DoubleList::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
    tail = nullptr;
}