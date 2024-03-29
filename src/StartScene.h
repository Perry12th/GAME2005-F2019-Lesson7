#pragma once
#ifndef __START_SCENE__
#define __START_SCENE__

#include "Scene.h"
#include "Label.h"
#include "Wookie.h"
#include "Bomb.h"
#include "Tropper.h"
#include <cmath>

class StartScene : public Scene
{
public:
	StartScene();
	~StartScene();

	// Inherited via Scene
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

private:
	/*Label* m_pStartLabel;
	Label* m_pInstructionsLabel;*/

	// Our Objects for this assignment
	Wookie* m_pWookie;
	Bomb* m_pBomb;
	Tropper* m_pTropper;
	float m_fTropperPosition = 500.0f; // Where the tropper is in the scene (x-axis)

	glm::vec2 m_mousePosition;

	// ImGui utility functions
	void m_ImGuiKeyMap();
	void m_ImGuiSetStyle();
	void m_updateUI();

	// ImGui menu variables
	bool m_exitApp = false;
	bool m_displayAbout = false;
	bool m_displayUI = true;

	// Phyiscs Variables
	const float Deg2Rad = 0.0174532925f;
	const float Rad2Deg = 57.2957795130f;
	bool m_isGravityEnabled = false;
	float m_gravity = 9.8f;
	float m_wind = 0.0f; // the amount of accel the wind gives the object on the x-axis
	float m_PPM = 5.0f; // pixels per meter

	glm::vec2 m_position = glm::vec2(0.0f, 0.0f);
	float m_velocity = 100.0f;
	float m_velocityX = 0.0f;
	float m_velocityY = 0.0f;
	glm::vec2 m_acceleration = glm::vec2(0.0f, 0.0f);
	float m_time = 0.01666f; // time step
	float m_Atime = 0.01666f; // accel time

	float m_angle = 45.0f; // the kicking angle

	// Physics Functions
	void m_move();
};

#endif /* defined (__START_SCENE__) */