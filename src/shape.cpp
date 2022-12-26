#include "shape.h"

/*! Initialises the shape class*/
Shape::Shape(float fNumOfVertices)
{
	shapeVertices.resize(fNumOfVertices); //!< Allows the number of vertices in the array to be changed based on the number required
}