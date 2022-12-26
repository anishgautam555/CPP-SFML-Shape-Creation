#pragma once

#include "shape.h"

/*! Circle class, derived from Shape*/
class Circle : public Shape
{
public:
	Circle(sf::Vector2f fFirstValue, int iRadius); //!< Constructor which takes the first value of the circle and the radius
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws the circle
};
