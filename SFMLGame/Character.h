#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>
class Character
{

	sf::Texture spriteT;
	sf::Sprite sprite;
public:
	Character();
	~Character();

	void loadTexture();
	void initialize();
	void update();
	void draw(sf::RenderWindow* t_window);
};
#endif