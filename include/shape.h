#pragma once

#include <SFML/Graphics.hpp>
#include <cmath>

/*! The parent Shape class which all of the other child classes inherit from*/
class Shape : public sf::Drawable
{
protected:
	sf::VertexArray shapeVertices; //!< Vertex array to produce the number of vertices required for the shape
	Shape(float fnumOfVertices); //!< Constructor that takes a float value for the number of vertices
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0; //!< Allows derived classes to draw the shape
};