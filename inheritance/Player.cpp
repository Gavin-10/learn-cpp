#include "Person.h"
#include "Player.h"

Player::Player(const std::string& m_game, const std::string& first_name, const std::string& last_name)
  : m_game(m_game) {
    this->setFirstName(first_name);
    this->setLastName(last_name);
}

std::ostream& operator << (std::ostream& out, const Player& player) {
  out << "Player: " << player.getFirstName() << " " << player.getLastName()
    << ", game: " << player.m_game;

  return out;
}


Player::~Player() {

}

