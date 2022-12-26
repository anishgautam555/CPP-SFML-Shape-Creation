#include "octagon.h"

/*! Constructs the octagon class*/
Octagon::Octagon(sf::Vector2f fPosition, int fgetSize) : Shape(8)
{
	/*! Gets the intitial position, places them in the correct points and then puts each point into the array as a vector*/
	shapeVertices[0] = sf::Vector2f(fPosition.x, fPosition.y);
	shapeVertices[1] = sf::Vector2f(fPosition.x + (4 * (fgetSize / 10)), fPosition.y);
	shapeVertices[2] = sf::Vector2f(fPosition.x + (7 * (fgetSize / 10)), fPosition.y + (3 * (fgetSize / 10)));
	shapeVertices[3] = sf::Vector2f(fPosition.x + (7 * (fgetSize / 10)), fPosition.y + (7 * (fgetSize / 10)));
	shapeVertices[4] = sf::Vector2f(fPosition.x + (4 * (fgetSize / 10)), fPosition.y + (10 * (fgetSize / 10)));
	shapeVertices[5] = sf::Vector2f(fPosition.x, fPosition.y + (10 * (fgetSize / 10)));
	shapeVertices[6] = sf::Vector2f(fPosition.x - (3 * (fgetSize / 10)), fPosition.y + (7 * (fgetSize / 10)));
	shapeVertices[7] = sf::Vector2f(fPosition.x - (3 * (fgetSize / 10)), fPosition.y + (3 * (fgetSize / 10)));

	shapeVertices.setPrimitiveType(sf::TrianglesFan); //!< Displays the octagon as connected triangles
}

/*! Draws the shape*/
void Octagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the vertices
}