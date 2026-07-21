#include "Player.h"

Player::Player(string n, int a) {
    name = n;
    attribute = a;
}

string Player::getName() { return name; }

int Player::getAttribute() { return attribute; }
