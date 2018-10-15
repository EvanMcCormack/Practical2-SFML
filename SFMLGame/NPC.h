#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Character.h"

using namespace std;

class NPC : public Character
{

	sf::Texture npcT;

public:
	sf::Sprite npc;
	float x;
	float y;
	NPC();
	~NPC();
	void initialize();
	void movement(float t_move);
	void update();
	void draw(sf::RenderWindow* t_window);
	void loadTexture();
};
#endif