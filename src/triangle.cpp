#include "triangle.h"

/*! Constructs the triangle class*/
Triangle::Triangle(sf::Vector2f fVertex1, sf::Vector2f fVertex2, sf::Vector2f fVertex3) : Shape(3)
{
	/*! Gets the position of the three vertices and places them into the array as vectors*/
	shapeVertices[0] = sf::Vector2f(fVertex1.x, fVertex1.y);
	shapeVertices[1] = sf::Vector2f(fVertex2.x, fVertex2.y);
	shapeVertices[2] = sf::Vector2f(fVertex3.x, fVertex3.y);

	shapeVertices.setPrimitiveType(sf::TriangleStrip); //!< Draws the shape as a triangle
}

/*! Draws the shape*/
void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the vertices
}