#include "player.h"

Player::Player(std::string_view first_name, std::string_view last_name, std::string_view game_name) 
  : game_name(game_name) {
  this->setFirstName(first_name);
  this->setLastName(last_name);
}

Player::~Player() {

}

std::ostream& operator << (std::ostream& out, const Player& player) {
  out << "Player: " << player.getFirstName() << " " << player.getLastName()
    << ", game: " << player.game_name;

  return out;
}