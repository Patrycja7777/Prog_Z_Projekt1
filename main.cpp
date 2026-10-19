#include <iostream>
using namespace std;
// Załączenie nagłówków poszczególnych klas
#include "DoubleList.h"

int main() {
    cout << "Listy dwukierunkowa" << endl;

    // Utworzenie instancji listy dzialającej na stercie
    DoubleList* list = new DoubleList();

    cout << "\n1. Dodawania elementow:" << endl;
    // Dodaj na początek listy
    list->addFront(20);
    list->addFront(10);

    // Dodaj na koniec listy
    list->addBack(40);
    list->addBack(50);

    // Wyświetl całą listę (oczekiwane: 10, 20, 30, 40, 50)
    cout << "Wyswietlanie calej listy: ";
    list->display();

    cout << "Wyswietlanie calej listy po usuwaniu (oczekiwane: 20, 40): ";
    list->display();

    cout << "\n3. Czyszczenia listy:" << endl;
    // Wyczyść całą listę
    list->clear();
    cout << "Wyswietlanie calej listy po wyczyszczeniu: ";
    list->display();

    // Zwalnianie pamięci
    delete list;

    cout << "\nZakonczenie testow" << endl;

    return 0;
}