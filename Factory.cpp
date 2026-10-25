/**
* @file Factory.cpp
 * @brief Implementacja metody klasy Factory.
 */
#include "Factory.h"

DoubleList* Factory::createList() {
    return new DoubleList();
}