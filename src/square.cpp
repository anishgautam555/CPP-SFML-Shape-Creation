#include "square.h"

/*! Constructing the square class*/
Square::Square(sf::Vector2f fSquarePos1, sf::Vector2f fSquarePos2, sf::Vector2f fSquarePos3, sf::Vector2f fSquarePos4) : Shape(4)
{
	/*! Gets the points and places them into the array as a vector*/
	shapeVertices[0] = sf::Vector2f(fSquarePos1.x, fSquarePos1.y);
	shapeVertices[1] = sf::Vector2f(fSquarePos2.x, fSquarePos2.y);
	shapeVertices[2] = sf::Vector2f(fSquarePos3.x, fSquarePos3.y);
	shapeVertices[3] = sf::Vector2f(fSquarePos4.x, fSquarePos4.y);

	shapeVertices.setPrimitiveType(sf::Quads); //!< Displays the points as a single square
}

/*! Draws the shape*/
void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the vertices
}