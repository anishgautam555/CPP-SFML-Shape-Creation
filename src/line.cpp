#include "line.h"

/*! Constructing the line class*/
Line::Line(sf::Vector2f fPos1, sf::Vector2f fPos2) : Shape(2)
{
	/*! Gets the position of the start and end of the line, and places them into the array as vectors*/
	shapeVertices[0] = sf::Vector2f(fPos1.x, fPos1.y);
	shapeVertices[1] = sf::Vector2f(fPos2.x, fPos2.y);
	
	shapeVertices.setPrimitiveType(sf::LinesStrip); //!< Draws a line between the two points
}

void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the two points
}