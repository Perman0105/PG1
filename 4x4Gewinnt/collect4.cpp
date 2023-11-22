#include "collect4.h"
#define log(x) std::cout << x << std::endl;
#define tab(x) std::cout << " | " << x ;
collect4::collect4()
{
    int x{};
    for(int i = 0; i < TABLE_ROW; i++) {
        for (int j = 0; j < TABLE_COLUMN; j ++) {
            table[i][j] = x;
            x++;
        }
    }
}

collect4::~collect4()
{

}

void collect4::startGame()
{
    this->draw();

}

void collect4::draw()
{

    for(int i = 0; i < TABLE_ROW; i++) {
        for (int j = 0; j < TABLE_COLUMN; j ++) {
            if(i == 0 ) {   //only print first row
                tab(j);
            }
            else {
                tab("O");
            }
        }
        std::cout << "\n";
    }
}
