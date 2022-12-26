#include "circle.h"

/*! Constructing the circle class*/
Circle::Circle(sf::Vector2f fFirstValue, int iRadius) : Shape(180 * (3.14159 / 180) * iRadius + 360)
{
	/*! Creates half of the circle, from the top left to the bottom right*/
	for (int x = -iRadius; x <= iRadius; x++)
	{
		float y = sqrt(pow(iRadius, 2) - pow(x, 2)); //!< Equation of the circle
		shapeVertices[x + iRadius] = sf::Vector2f(-x + fFirstValue.x, y + fFirstValue.y); //!< Placing the values of the circle into the array
	}

	/*! Creates the other half of the circle*/
	for (int x = -iRadius; x <= iRadius; x++)
	{
		float y = sqrt(pow(iRadius, 2) - pow(x, 2)); //!< Equation of the circle
		shapeVertices[x + iRadius + 99] = sf::Vector2f(x + fFirstValue.x, -y + fFirstValue.y); //!< Placing the values of the circle into the array
	}

	shapeVertices.setPrimitiveType(sf::TrianglesFan); //!< Draws the circle as many triangles connected by the vertices
}

/*! Drawing the shape*/
void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the vertices
}