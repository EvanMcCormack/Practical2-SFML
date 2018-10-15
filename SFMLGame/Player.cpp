#include <Player.h>

Player::Player() { loadTexture(); };
Player::~Player(){};

void Player::initialize()
{
	cout << "Player initialize" << endl;
}
void Player::update()
{
	//cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow* t_window)
{
	t_window->draw(player);
	//cout << "Player drawing" << endl;
}

void Player::loadTexture()
{
	if (!playerT.loadFromFile("mario.png"))
	{
		std::cout << "Where you at?" << std::endl;
	}
	player.setTexture(playerT);
	player.setPosition(100, 100);
	player.setScale(0.1, 0.1);
}