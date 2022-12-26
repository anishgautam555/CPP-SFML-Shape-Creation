#pragma once

#include "shape.h"

/*! Arc class, derived from Shape */
class Arc : public Shape
{
public:
	Arc(sf::Vector2f fFirstValue, int iRadius); //!< Constructor which takes the first value and the radius
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws the arc
};
