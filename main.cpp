#include <iostream>

#include "Player.h"

using namespace std;

Player characterCreation() {
    string playerName;
    int playerAttribute;
    cout << "+ + + Character Creation + + +" << endl;
    cout << "Enter player name: ";
    cin >> playerName;
    cin.clear();
    cout << "Player Attributes: " << endl;
    cout << "1. Joja Cola Subscription (+1 Speed)" << endl;
    cout << "2. Evelyn's Glasses (+1 Perception)" << endl;
    cout << "3. Rare Mushrooms (+10 Mana)" << endl;
    cout << "4. Strange Hobbies (+20 Monster Guts)" << endl;
    cout << "Choose a player attribute: ";
    cin >> playerAttribute;
    Player player = Player(playerName, playerAttribute);
    return player;
}

void displayMenu() {
    
}

int main() {
    cout << "Welcome to Stardon't Valley" << endl;
    Player player = characterCreation();
    
    return 0;
}