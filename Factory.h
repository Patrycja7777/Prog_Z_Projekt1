/**
* @file Factory.h
 * @brief Deklaracja klasy Factory implementującej wzorzec projektowy Fabryki.
 */
#pragma once
#include "DoubleList.h"

/**
 * @class Factory
 * @brief Klasa fabryki odpowiedzialna za tworzenie instancji listy dwukierunkowej.
 */
class Factory {
public:
    /**
     * @brief Tworzy nowy obiekt listy dwukierunkowej na stercie.
     * @return Wskaźnik na nowo utworzoną instancję DoubleList.
     */
    static DoubleList* createList();
};