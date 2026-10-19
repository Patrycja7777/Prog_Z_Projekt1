#pragma once // Chroni przed wielokrotnym załączeniem tego samego pliku
#include "Node.h"

// Klasa głównej
class DoubleList {
private:
    Node* head;
    Node* tail;

public:
    // Konstruktor i destruktor
    DoubleList();
    ~DoubleList();

    // Metody
    void addFront(int value);
    void addBack(int value);
    void display();
    void clear();
};