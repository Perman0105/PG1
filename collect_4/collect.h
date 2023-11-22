#ifndef COLLECT_H
#define COLLECT_H

#include <iostream>
#include <string.h>

using namespace std;

class Collect
{
public:
    Collect();
    void draw();
    void print();
private:
    string table[13][29];
    int pos[42];
};

#endif // COLLECT_H
