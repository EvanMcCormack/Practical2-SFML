#include <Game.h>
#include <SFML/Graphics.hpp>

using namespace sf;

sf::RenderWindow* window = new RenderWindow(sf::VideoMode(800, 600), "Launching...");;
float leMove = 0.2f;
Game::Game(){}

void Game::initialize()
{
	player = new Player();
	npc = new NPC();

	window->setSize(sf::Vector2u(640, 480));
	window->setTitle("Game");
}

void Game::run()
{
	initialize();

	while (window->isOpen())
	{
		update();
		draw();
	}
}

void Game::update()
{
	sf::Event event;
	npc->movement(leMove);
	player->update();
	npc->update();
	if (player->player.getGlobalBounds().intersects(npc->npc.getGlobalBounds()))
	{
		std::cout << "SmAsH" << std::endl;
		leMove = -0.2f;
	}
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();
	}
}

void Game::draw()
{
	window->clear();
	//window->draw(shape);
	player->draw(window);
	npc->draw(window);
	window->display();
}


