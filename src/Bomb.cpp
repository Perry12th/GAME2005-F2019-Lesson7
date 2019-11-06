#include "Bomb.h"
#include "Game.h"

Bomb::Bomb()
{
	TheTextureManager::Instance()->load("../Assets/textures/bomb.png",
		"bomb", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/flames.png",
		"flames", TheGame::Instance()->getRenderer());
}

Bomb::~Bomb()
{
}

void Bomb::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw(m_sState, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}