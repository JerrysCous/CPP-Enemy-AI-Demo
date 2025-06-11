#include <iostream>
#include <vector>
#include <memory>
#include "Enemy.h"

class Zombie : public Enemy {
public:
    Zombie(std::string n) : Enemy(n) {}
    void Act() override {
        std::cout << name << " is shuffling forward... [" << GetStateString() << "]\n";
    }
};

class Robot : public Enemy {
public:
    Robot(std::string n) : Enemy(n) {}
    void Act() override {
        std::cout << name << " is scanning for targets... [" << GetStateString() << "]\n";
    }
};

// Placeholder for future AI pathfinding logic
void Pathfind() {
    // TODO: Implement A* or other pathfinding logic
    std::cout << "[AI] Pathfinding from A to B...\n";
}

int main() {
    std::vector<std::shared_ptr<Enemy>> enemies;
    enemies.push_back(std::make_shared<Zombie>("Undead001"));
    enemies.push_back(std::make_shared<Robot>("UnitX"));

    for (auto& enemy : enemies) {
        enemy->SetState(EnemyState::Attack);
        enemy->Act();
    }

    Pathfind();

    return 0;
}
