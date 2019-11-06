#include "Tropper.h"
#include "Game.h"

Tropper::Tropper()
{
	TheTextureManager::Instance()->load("../Assets/textures/tropper.png",
		"tropper", TheGame::Instance()->getRenderer());
}


Tropper::~Tropper()
{
}

void Tropper::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("tropper", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}
