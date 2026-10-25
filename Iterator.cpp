/**
* @file Iterator.cpp
 * @brief Implementacja metod klasy Iterator.
 */
#include "Iterator.h"

Iterator::Iterator(Node* startNode) {
    current = startNode;
}

void Iterator::next() {
    if (current != nullptr) {
        current = current->next;
    }
}

void Iterator::prev() {
    if (current != nullptr) {
        current = current->prev;
    }
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