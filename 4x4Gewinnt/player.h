#ifndef PLAYER_H
#define PLAYER_H


class player
{
public:
    player();
    int getPlayerID() const;
    void setPlayerID(int newPlayerID);
    void test();

private:
    int playerID;
};

#endif // PLAYER_H
