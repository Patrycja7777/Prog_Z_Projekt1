/**
 * @file main.cpp
 * @brief Główny plik programu testującego implementację interaktywnej listy dwukierunkowej.
 */
#include <iostream>
#include "Factory.h"
#include "DoubleList.h"
#include "Iterator.h"

using namespace std;

/**
 * @brief Wyświetla menu interaktywne dla użytkownika.
 * Prezentuje wszystkie dostępne operacje na liście dwukierunkowej, które można przetestować.
 */
void showMenu() {
    cout << "\n~~ MENU LISTY DWUKIERUNKOWEJ ~~" << endl;
    cout << "1. Dodaj element na poczatek" << endl;
    cout << "2. Dodaj element na koniec" << endl;
    cout << "3. Dodaj element pod wskazany indeks" << endl;
    cout << "4. Usun element z poczatku" << endl;
    cout << "5. Usun element z konca" << endl;
    cout << "6. Usun element z pod wskazanego indeksu" << endl;
    cout << "7. Wyswietl cala liste" << endl;
    cout << "8. Wyswietl liste w odwrotnej kolejnosci" << endl;
    cout << "9. Testuj iterator (nastepny i poprzedni element)" << endl;
    cout << "10. Wyczysc cala liste" << endl;
    cout << "0. Wyjscie" << endl;
    cout << "\nWybierz opcje: ";
}

/**
 * @brief Główna funkcja programu.
 * Inicjalizuje listę na stercie przy użyciu wzorca Factory, a następnie uruchamia pętlę
 * obsługującą wybory użytkownika z menu.
 *
 * @return Wartość 0 oznaczająca poprawne zakończenie programu.
 */
int main() {
    // Utworzenie listy za pomocą wzorca Factory
    DoubleList* list = Factory::createList();
    int choice, value, index;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Podaj wartosc do dodania na poczatek: ";
                cin >> value;
                list->addFront(value);
                break;
            case 2:
                cout << "Podaj wartosc do dodania na koniec: ";
                cin >> value;
                list->addBack(value);
                break;
            case 3:
                cout << "Podaj indeks: ";
                cin >> index;
                cout << "Podaj wartosc: ";
                cin >> value;
                list->insertAt(index, value);
                break;
            case 4:
                list->removeFront();
                cout << "Usunieto element z poczatku." << endl;
                break;
            case 5:
                list->removeBack();
                cout << "Usunieto element z konca." << endl;
                break;
            case 6:
                cout << "Podaj indeks do usuniecia: ";
                cin >> index;
                list->removeAt(index);
                break;
            case 7:
                cout << "Lista: ";
                list->display();
                break;
            case 8:
                cout << "Lista odwrotnie: ";
                list->displayReverse();
                break;
            case 9: {
                // Testowanie wzorca iteratora
                Iterator* it = list->getIterator();
                cout << "Wyswietlanie dwoch nastepnych elementow:" << endl;
                if (it->hasNext()) cout << it->next() << " ";
                if (it->hasNext()) cout << it->next() << " ";
                cout << "\nCofanie do poprzedniego elementu:" << endl;
                if (it->hasPrevious()) cout << it->previous() << endl;
                delete it; // Zwalnianie pamięci iteratora
                break;
            }
            case 10:
                list->clear();
                cout << "Wyczyszczono liste." << endl;
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidlowa opcja!" << endl;
        }
    } while (choice != 0);

    // Zwalnianie pamięci
    list->clear();
    delete list;

    return 0;
}