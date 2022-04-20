#pragma once

#include "Engine/GameEngine.h"

class Laser : public GameObject
{
public:
	//creates our laser
	Laser(sf::Vector2f pos);

	//functions overriden from GameObject:
	void draw();
	void update(sf::Time& elapsed);
	sf::FloatRect getCollisionRect();

private:
	sf::Sprite sprite_;
};

typedef std::shared_ptr<Laser> LaserPtr;
