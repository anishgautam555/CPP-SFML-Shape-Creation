#include "dot.h"

/*! Constructing the dot class*/
Dot::Dot(sf::Vector2f dotPos) : Shape (1)
{
	shapeVertices[0] = sf::Vector2f(dotPos.x, dotPos.y); //!< Places the dot position into the array as a vector
	shapeVertices[0].color = sf::Color::Red; //!< Colours the dot red, for visibility
}

/*! Drawing the shape*/
void Dot::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shapeVertices, states); //!< Draws the dot
}