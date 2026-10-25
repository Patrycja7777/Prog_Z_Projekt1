/**
* @file Iterator.cpp
 * @brief Implementacja metod klasy Iterator.
 */
#include "Iterator.h"

Iterator::Iterator(Node* startNode) {
    current = startNode;
}

bool Iterator::hasNext() {
    return current != nullptr;
}

bool Iterator::hasPrevious() {
    return current != nullptr;
}

int Iterator::next() {
    if (current != nullptr) {
        int val = current->data;
        current = current->next;
        return val;
    }
    return -1;
}

int Iterator::previous() {
    if (current != nullptr) {
        int val = current->data;
        current = current->prev;
        return val;
    }
    return -1;
}

int Iterator::getValue() {
    if (current != nullptr) {
        return current->data;
    }
    return -1; // Zwracana wartość błędu dla pustego wskaźnika
}

bool Iterator::isNull() {
    return current == nullptr;
}