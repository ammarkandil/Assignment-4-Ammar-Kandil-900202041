#include <stdio.h>
class LinkedListHash {
public:
    LinkedListHash();
    void insert (int num, int value);
    void remove (int num, int value);
    void print();
    float collisionrate();
    
};
