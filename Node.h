#pragma once

class Node {
public:
    int data;     // Przechowywana wartość
    Node* next;   // Wskaźnik na następny element
    Node* prev;   // Wskaźnik na poprzedni element

    // Konstruktor
    Node(int val);
};