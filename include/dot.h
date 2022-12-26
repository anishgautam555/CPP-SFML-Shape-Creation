#pragma once

#include "shape.h"

/*! Dot class, derived from Shape*/
class Dot : public Shape
{
public:
	Dot(sf::Vector2f dotPos); //!< Constructor which takes the dot's position
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws dot
};