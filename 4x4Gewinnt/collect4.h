#ifndef COLLECT4_H
#define COLLECT4_H

#include<iostream>
#include<array>
#define TABLE_ROW 11
#define TABLE_COLUMN 8
class collect4
{
public:
    collect4();
    ~collect4();
    void startGame();
    void draw();
private:
    int table[TABLE_ROW][TABLE_COLUMN];
};

#endif // COLLECT4_H
