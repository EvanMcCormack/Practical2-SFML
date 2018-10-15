#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"

using namespace std;

class Player : public Character
{
	sf::Texture playerT;
public:
	sf::Sprite player;
	Player();
	~Player();
	void loadTexture();
	void initialize();
	void update();
	void draw(sf::RenderWindow* t_window);
};
#endif