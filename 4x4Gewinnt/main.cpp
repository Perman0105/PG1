#include <iostream>
#include"collect4.h"
using namespace std;

int main()
{
    collect4* game = new collect4();
    game->startGame();
    delete game;
}
