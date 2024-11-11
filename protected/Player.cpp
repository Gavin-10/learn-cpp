#include "Player.h"

Player::Player(const std::string& m_game, const std::string& first_name, const std::string& last_name)
  : m_game(m_game) {
  this->first_name = first_name;
  this->last_name = last_name;
}

Player::~Player() {
  
}

std::ostream& operator << (std::ostream& out, const Player& player) {
  out << "Player: " << player.first_name << " " << player.last_name
    << ", game: " << player.m_game;

  return out;
}

