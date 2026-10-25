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
     * @brief Sprawdza, czy istnieje obecny/następny element do odczytu.
     * @return True, jeśli element istnieje, w przeciwnym razie false.
     */
    bool hasNext();

    /**
     * @brief Sprawdza, czy istnieje obecny/poprzedni element do odczytu.
     * @return True, jeśli element istnieje, w przeciwnym razie false.
     */
    bool hasPrevious();

    /**
     * @brief Pobiera wartość obecnego elementu i przesuwa iterator na następny.
     * @return Wartość całkowita węzła lub -1, jeśli element nie istnieje.
     */
    int next();

    /**
     * @brief Pobiera wartość obecnego elementu i przesuwa iterator na poprzedni.
     * @return Wartość całkowita węzła lub -1, jeśli element nie istnieje.
     */
    int previous();

    /**
     * @brief Pobiera wartość z obecnego węzła bez przesuwania.
     * @return Wartość całkowita węzła lub -1, jeśli węzeł to nullptr.
     */
    int getValue();

    /**
     * @brief Sprawdza, czy iterator wskazuje na nullptr.
     * @return True jeśli current jest nullptr, w przeciwnym razie false.
     */
    bool isNull();
};