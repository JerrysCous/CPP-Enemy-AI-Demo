#pragma once
#include <string>

enum class EnemyState {
    Idle,
    Attack,
    Dead
};

class Enemy {
protected:
    std::string name;
    EnemyState state;

public:
    Enemy(std::string n) : name(n), state(EnemyState::Idle) {}
    virtual ~Enemy() {}

    virtual void Act() = 0;
    void SetState(EnemyState newState);
    std::string GetStateString() const;
};

