#ifndef PLAYER_H_
#define PLAYER_H_

#include "Person.h"

class Player : public Person {
  friend std::ostream& operator << (std::ostream& out, const Player& player);

  public:
    Player() = default;
    Player(const std::string& m_game, const std::string& first_name, const std::string& last_name);
    ~Player();

  private:
    std::string m_game;
};

#endif