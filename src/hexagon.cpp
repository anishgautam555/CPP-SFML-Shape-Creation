#include "hexagon.h"

/* Constructing the hexagon class*/
Hexagon::Hexagon(sf::Vector2f hexPoint1, sf::Vector2f hexPoint2, sf::Vector2f hexPoint3, sf::Vector2f hexPoint4, sf::Vector2f hexPoint5, sf::Vector2f hexPoint6) : Shape(6)
{
	/*! Gets the position of each vertex and places them into the array*/
	shapeVertices[0] = sf::Vector2f(hexPoint1.x, hexPoint1.y);
	shapeVertices[1] = sf::Vector2f(hexPoint2.x, hexPoint2.y);
	shapeVertices[2] = sf::Vector2f(hexPoint3.x, hexPoint3.y);
	shapeVertices[3] = sf::Vector2f(hexPoint4.x, hexPoint4.y);
	shapeVertices[4] = sf::Vector2f(hexPoint5.x, hexPoint5.y);
	shapeVertices[5] = sf::Vector2f(hexPoint6.x, hexPoint6.y);

	shapeVertices.setPrimitiveType(sf::TrianglesFan); //!< Draws the hexagon as connected triangles
}

/*! Draws the shape*/
void Hexagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the hexagon vertices
}