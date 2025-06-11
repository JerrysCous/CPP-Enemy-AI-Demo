#include "Enemy.h"

void Enemy::SetState(EnemyState newState) {
    state = newState;
}

std::string Enemy::GetStateString() const {
    switch (state) {
    case EnemyState::Idle: return "Idle";
    case EnemyState::Attack: return "Attack";
    case EnemyState::Dead: return "Dead";
    default: return "Unknown";
    }
}
