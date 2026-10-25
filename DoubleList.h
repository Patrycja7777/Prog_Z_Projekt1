/**
* @file DoubleList.h
 * @brief Deklaracja klasy DoubleList reprezentującej listę dwukierunkową.
 */
#pragma once // Chroni przed wielokrotnym załączeniem tego samego pliku
#include "Node.h"

/**
 * @class DoubleList
 * @brief Klasa zarządzająca elementami listy dwukierunkowej.
 */
class DoubleList {
private:
    Node* head; ///< Wskaźnik na pierwszy element
    Node* tail; ///< Wskaźnik na ostatni element

public:
    /**
     * @brief Konstruktor domyślny.
     */
    DoubleList();
    /**
     * @brief Destruktor. Zwalnia pamięć zajmowaną przez elementy listy.
     */
    ~DoubleList();

    // Metody
    /**
     * @brief Dodaje nowy element na początek listy.
     * @param value Wartość całkowita przypisywana do nowego węzła.
     */
    void addFront(int value);

    /**
     * @brief Dodaje nowy element na koniec listy.
     * @param value Wartość całkowita przypisywana do nowego węzła.
     */
    void addBack(int value);

    /**
     * @brief Wyświetla wszystkie elementy listy.
     */
    void display();

    /**
     * @brief Czyści całą listę, usuwając jej węzły z pamięci.
     */
    void clear();
};