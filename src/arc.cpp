#include "arc.h"

/*! Constructing the class variable*/
Arc::Arc(sf::Vector2f fFirstValue, int iRadius) : Shape((180 * (3.14159/180) * iRadius) - 170) 
{
	/*! Creates the necessary number of vertices*/
	for (int x = -iRadius; x <= iRadius; x++)
	{
		float y = sqrt(pow(iRadius, 2) - pow(x, 2)); //!< Equation of a circle
		shapeVertices[x + iRadius] = sf::Vector2f(x + fFirstValue.x, y + fFirstValue.y); //!< Adding values to the Shape vertex array
	}
	shapeVertices.setPrimitiveType(sf::LinesStrip); //!< Connects vertices as a line
}

/*! Drawing the shape*/
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the vertices
}