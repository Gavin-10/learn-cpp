#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <string>
#include <string_view>

#include "person.h"

//restricts all data in class to this access modifier, protected too
//could be useful for an abstract class situation
class Player : private Person {
  friend std::ostream& operator << (std::ostream& out, const Player& player);

  public:
    Player() = default;
    Player(std::string_view first_name, std::string_view last_name, std::string_view game_name);
    ~Player();

    std::string getGame() const {
      return this->game_name;
    }

    void setGame(std::string_view game_name) {
      this->game_name = game_name;
    }

  private:
    std::string game_name;
};

#endif