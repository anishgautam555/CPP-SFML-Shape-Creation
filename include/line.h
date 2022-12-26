#pragma once

#include "shape.h"

/*! Line class, derived from Shape*/
class Line : public Shape
{
public:
	Line(sf::Vector2f fPos1, sf::Vector2f fPos2); //!< Constructor which takes the start and end coordinates of the line 
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws the line
};