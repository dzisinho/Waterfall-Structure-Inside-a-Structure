#include <iostream>
using namespace std;

struct Stats {
    int goals;
};

struct Player {
    string name;
    Stats stats;

    void score() {
        stats.goals++;
        cout << name << " scores! Total goals: " << stats.goals << endl;
    }
};

int main() {
    Player player1 = { "Messi", {0} };
    Player player2 = { "Ronaldo", {0} };

    player1.score();
    player2.score();
    player1.score();
}
