#include "Wookie.h"
#include "Game.h"

Wookie::Wookie()
{
	TheTextureManager::Instance()->load("../Assets/textures/wookie.png",
		"wookie", TheGame::Instance()->getRenderer());
}
Wookie::~Wookie()
{
}

void Wookie::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("wookie", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}
