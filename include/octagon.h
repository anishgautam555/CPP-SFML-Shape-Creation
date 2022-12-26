#pragma once

#include "shape.h"

/*! Octagon class, derived from Shape*/
class Octagon : public Shape
{
public:
	Octagon(sf::Vector2f fPosition, int fgetSize); //!< Constructor which takes the starting position and the size of the octagon
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws the shape
};