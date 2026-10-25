/**
* @file DoubleList.cpp
 * @brief Implementacja metod klasy DoubleList dla listy dwukierunkowej. 
 */
#include "DoubleList.h"
#include "Node.h"
#include <iostream>
using namespace std;

/**
 * @brief Konstruktor domyślny.
 * Inicjalizuje pustą listę, ustawiając wskaźniki head i tail na nullptr.
 */
DoubleList::DoubleList() {
    head = nullptr;
    tail = nullptr;
}

/**
 * @brief Destruktor.
 * Zwalnia zaalokowaną pamięć poprzez wywołanie metody clear().
 */
DoubleList::~DoubleList() {
    clear();
}

/**
 * @brief Dodaje element na początek listy.
 * @param value Wartość całkowita, która zostanie dodana jako nowy węzeł na początku.
 */
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

/**
 * @brief Dodaje element na koniec listy.
 * @param value Wartość całkowita, która zostanie dodana jako nowy węzeł na końcu.
 */
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

/**
 * @brief Wyświetla całą listę.
 * Przechodzi przez wszystkie elementy od początku do końca, wypisując ich wartości.
 */
void DoubleList::display() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

/**
 * @brief Czyści całą listę.
 * Usuwa wszystkie węzły z pamięci sterty i przywraca stan początkowy (pusta lista).
 */
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