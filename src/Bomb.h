#pragma once

#include "DisplayObject.h"
#include "TextureManager.h"
#include <string>

class Bomb :
	public DisplayObject
{
public:
	Bomb();
	~Bomb();

	// Inherited via GameObject
	void draw() override;

	void update() override {};

	void clean() override {};

	bool m_bHitFloor; // When the bomb hits the floor the text texture will change to a flame
	std::string m_sState = "bomb";
};

