/**
* @file Node.cpp
 * @brief Implementacja metod klasy Node reprezentującej pojedynczy węzeł listy.
 */
#include "Node.h"

/**
 * @brief Konstruktor inicjalizujący węzeł.
 * Przypisuje przekazaną wartość do pola danych oraz ustawia wskaźniki na sąsiednie węzły na nullptr.
 *
 * @param val Wartość całkowita, która zostanie przechowana w węźle.
 */
Node::Node(int val) {
    data = val;
    next = nullptr;
    prev = nullptr;
}