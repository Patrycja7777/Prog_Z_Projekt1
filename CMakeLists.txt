cmake_minimum_required(VERSION 3.20)
# Wpisz ponizej nazwe swojego projektu zamiast "Zadanie1"
project(Projekt_1)

# Ustawienie standardu C++ (np. C++14, C++17, C++20)
set(CMAKE_CXX_STANDARD 14)

# Zdefiniowanie programu wykonawczego.
# Wypisz tutaj wszystkie swoje pliki .cpp (plikow .h NIE dodajemy)
add_executable(Projekt_1 main.cpp DoubleList.cpp Node.cpp)