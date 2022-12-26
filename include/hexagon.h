#pragma once

#include "shape.h"

/*! Hexagon class, derived from Shape*/
class Hexagon : public Shape
{
public:
	Hexagon(sf::Vector2f hexPoint1, sf::Vector2f hexPoint2, sf::Vector2f hexPoint3, sf::Vector2f hexPoint4, sf::Vector2f hexPoint5, sf::Vector2f hexPoint6); //!< Constructor which takes the six vertices
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws the hexagon
};