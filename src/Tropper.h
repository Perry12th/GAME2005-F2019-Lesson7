#pragma once

#include "DisplayObject.h"
#include "TextureManager.h"

class Tropper :
	public DisplayObject
{
public:
	Tropper();
	~Tropper();

	// Inherited via GameObject
	void draw() override;

	void update() override {};

	void clean() override {};
};

