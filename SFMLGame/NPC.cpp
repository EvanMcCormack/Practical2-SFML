#include <NPC.h>

NPC::NPC() { x = 500; y = 100; loadTexture(); };
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;
}
void NPC::movement(float t_move)
{
	x -= t_move;
}
void NPC::update()
{
	//cout << "NPC updating" << endl;
	npc.setPosition(x, y);
}
void NPC::loadTexture()
{
	if (!npcT.loadFromFile("sonic.png"))
	{
		std::cout << "2Speedy4U" << std::endl;
	}
	npc.setTexture(npcT);
	npc.setScale(0.6, 0.6);
}
void NPC::draw(sf::RenderWindow* t_window)
{
	//cout << "NPC drawing" << endl;
	t_window->draw(npc);
}