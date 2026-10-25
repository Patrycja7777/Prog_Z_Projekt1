/**
* @file Node.h
 * @brief Deklaracja klasy Node reprezentującej pojedynczy element listy dwukierunkowej.
 */
#pragma once

/**
 * @class Node
 * @brief Klasa reprezentująca węzeł listy dwukierunkowej.
 */
class Node {
public:
    int data;     ///< Przechowywana wartość
    Node* next;   ///< Wskaźnik na następny element
    Node* prev;   ///< Wskaźnik na poprzedni element

    /**
     * @brief Konstruktor inicjalizujący nowy węzeł.
     * @param val Wartość całkowita, która zostanie przypisana do węzła.
     */
    Node(int val);
};