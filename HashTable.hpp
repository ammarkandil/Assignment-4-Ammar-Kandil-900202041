#include <stdio.h>

class HashTable {
public:
    HashTable();
    void insert (int num, int value);
    void remove(int num);
    void print ();
    float collisionrate();
};

