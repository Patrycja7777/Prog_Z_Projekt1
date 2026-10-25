/**
 * @file DoubleList.h
 * @brief Deklaracja klasy DoubleList reprezentującej listę dwukierunkową.
 */
#pragma once
#include "Node.h"
#include "Iterator.h"

/**
 * @class DoubleList
 * @brief Klasa zarządzająca elementami listy dwukierunkowej.
 */
class DoubleList {
private:
    Node* head; ///< Wskaźnik na pierwszy element.
    Node* tail; ///< Wskaźnik na ostatni element.

public:
    /**
     * @brief Konstruktor domyślny.
     * Inicjalizuje pustą listę.
     */
    DoubleList();

    /**
     * @brief Destruktor. Zwalnia pamięć zajmowaną przez elementy listy.
     */
    ~DoubleList();

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
     * @brief Dodaje nowy element pod wskazany indeks.
     * @param index Indeks, pod którym ma zostać wstawiony nowy element.
     * @param value Wartość całkowita przypisywana do nowego węzła.
     */
    void insertAt(int index, int value);

    /**
     * @brief Usuwa element z początku listy.
     */
    void removeFront();

    /**
     * @brief Usuwa element z końca listy.
     */
    void removeBack();

    /**
     * @brief Usuwa element z pod wskazanego indeksu.
     * @param index Indeks elementu, który ma zostać usunięty.
     */
    void removeAt(int index);

    /**
     * @brief Wyświetla wszystkie elementy listy od początku do końca.
     */
    void display();

    /**
     * @brief Wyświetla wszystkie elementy listy w odwrotnej kolejności.
     */
    void displayReverse();

    /**
     * @brief Czyści całą listę, usuwając jej węzły z pamięci.
     */
    void clear();

    /**
     * @brief Zwraca iterator ustawiony na początek listy.
     * @return Wskaźnik na obiekt klasy Iterator wskazujący na pierwszy element.
     */
    Iterator* getIterator();
};