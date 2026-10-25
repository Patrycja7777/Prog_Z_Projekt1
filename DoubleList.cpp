/**
 * @file DoubleList.cpp
 * @brief Implementacja metod klasy DoubleList.
 */
#include "DoubleList.h"
#include <iostream>

using namespace std;

/**
 * @brief Konstruktor domyślny klasy DoubleList.
 * Inicjalizuje pustą listę ze wskaźnikami head i tail ustawionymi na nullptr.
 */
DoubleList::DoubleList() : head(nullptr), tail(nullptr) {}

/**
 * @brief Destruktor klasy DoubleList.
 * Czyści listę i zwalnia zaalokowaną pamięć.
 */
DoubleList::~DoubleList() {
    clear();
}

/**
 * @brief Dodaje nowy element na początek listy.
 * @param value Wartość całkowita do dodania.
 */
void DoubleList::addFront(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

/**
 * @brief Dodaje nowy element na koniec listy.
 * @param value Wartość całkowita do dodania.
 */
void DoubleList::addBack(int value) {
    Node* newNode = new Node(value);
    if (!tail) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

/**
 * @brief Dodaje element pod wskazany indeks.
 * @param index Indeks, pod którym ma zostać dodany element.
 * @param value Wartość całkowita do dodania.
 */
void DoubleList::insertAt(int index, int value) {
    if (index == 0) {
        addFront(value);
        return;
    }
    Node* current = head;
    for (int i = 0; current != nullptr && i < index - 1; i++) {
        current = current->next;
    }
    if (!current || !current->next) {
        addBack(value);
        return;
    }

    Node* newNode = new Node(value);
    newNode->next = current->next;
    newNode->prev = current;
    current->next->prev = newNode;
    current->next = newNode;
}

/**
 * @brief Usuwa element z początku listy.
 */
void DoubleList::removeFront() {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    else tail = nullptr;
    delete temp;
}

/**
 * @brief Usuwa element z końca listy.
 */
void DoubleList::removeBack() {
    if (!tail) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail) tail->next = nullptr;
    else head = nullptr;
    delete temp;
}

/**
 * @brief Usuwa element z pod wskazanego indeksu.
 * @param index Indeks elementu do usunięcia.
 */
void DoubleList::removeAt(int index) {
    if (!head) return;
    if (index == 0) {
        removeFront();
        return;
    }
    Node* current = head;
    for (int i = 0; current != nullptr && i < index; i++) {
        current = current->next;
    }
    if (!current) return;
    if (current == tail) {
        removeBack();
        return;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
}

/**
 * @brief Wyświetla całą listę od początku do końca.
 */
void DoubleList::display() {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

/**
 * @brief Wyświetla listę w odwrotnej kolejności (od końca do początku).
 */
void DoubleList::displayReverse() {
    Node* current = tail;
    while (current) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

/**
 * @brief Czyści całą listę, usuwając z pamięci wszystkie jej węzły.
 */
void DoubleList::clear() {
    while (head) {
        removeFront();
    }
}

/**
 * @brief Pobiera iterator do poruszania się po liście.
 * @return Zwraca wskaźnik na instancję klasy Iterator ustawioną na pierwszy element listy.
 */
Iterator* DoubleList::getIterator() {
    return new Iterator(head);
}