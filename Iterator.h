/**
* @file Iterator.h
 * @brief Wzorzec Iteratora pozwalający na przeglądanie listy.
 */
#pragma once
#include "Node.h"

/**
 * @class Iterator
 * @brief Klasa iteratora do poruszania się po węzłach.
 */
class Iterator {
private:
    Node* current; ///< Wskaźnik na obecny węzeł.
public:
    /**
     * @brief Konstruktor inicjalizujący iterator.
     * @param startNode Węzeł początkowy.
     */
    Iterator(Node* startNode);

    /**
     * @brief Przesuwa iterator na następny element.
     */
    void next();

    /**
     * @brief Przesuwa iterator na poprzedni element.
     */
    void prev();

    /**
     * @brief Pobiera wartość z obecnego węzła.
     * @return Wartość całkowita węzła lub -1, jeśli węzeł to nullptr.
     */
    int getValue();

    /**
     * @brief Sprawdza, czy iterator wskazuje na nullptr.
     * @return True jeśli current jest nullptr, w przeciwnym razie false.
     */
    bool isNull();
};