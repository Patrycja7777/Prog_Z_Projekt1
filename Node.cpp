#include "Node.h"

// Implementacja konstruktora klasy Node
Node::Node(int val) {
    data = val;
    next = nullptr;
    prev = nullptr;
}