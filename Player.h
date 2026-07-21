#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

using namespace std;

class Player {
    private:
        string name;
        int attribute;
        int speed;
        int mana;
        int loot;
        vector<string> inventory;

    public:
        Player(string n, int a);
        string getName();
        int getAttribute();
};

#endif