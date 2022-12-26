#pragma once

#include "shape.h"

/*! Triangle class, derived from Shape*/
class Triangle : public Shape
{
public:
	Triangle(sf::Vector2f fVertex1, sf::Vector2f fVertex2, sf::Vector2f fVertex3); //!< Constructor which takes the 3 vertices
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws the triangle
};