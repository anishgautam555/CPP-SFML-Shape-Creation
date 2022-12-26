#pragma once

#include "shape.h"

/*! Square class, derived from Shape*/
class Square : public Shape
{
public:
	Square(sf::Vector2f fSquarePos1, sf::Vector2f fSquarePos2, sf::Vector2f fSquarePos3, sf::Vector2f fSquarePos4); //!< Constructor which takes the 4 points positions
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override; //!< Draws the square
};