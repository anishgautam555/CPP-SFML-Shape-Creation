/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

//Anish Gautam, P2657398

#include "SFML/Graphics.hpp"
#include "dot.h"
#include "line.h"
#include "triangle.h"
#include "square.h"
#include "hexagon.h"
#include "arc.h"
#include "circle.h"
#include "octagon.h"

int main() //!< Entry point for the application
{
	/*! Initialising the window*/
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	/*! Initialising all of my shapes*/
	Dot myDot(sf::Vector2f(500, 500));
	Line myLine(sf::Vector2f(200, 200), sf::Vector2f(400, 400));
	Triangle myTriangle(sf::Vector2f(550, 150), sf::Vector2f(750, 150), sf::Vector2f(750, 300));
	Square mySquare(sf::Vector2f(1000,500), sf::Vector2f(1000, 700), sf::Vector2f(800, 700), sf::Vector2f(800,500));
	Hexagon myHex(sf::Vector2f(150, 550), sf::Vector2f(250, 550), sf::Vector2f(300, 650), sf::Vector2f(250, 750), sf::Vector2f(150, 750), sf::Vector2f(100, 650));
	Arc myArc(sf::Vector2f(600, 600), 150);
	Circle myCircle(sf::Vector2f(300, 100), 50);
	Octagon myOctagon(sf::Vector2f(900, 200), 75);

	/*! Tells the compiler what to do when the window opens*/
	while (window.isOpen())
	{
		sf::Event event; //!< Creates event so that window can be closed

		/*! Allows the window to be closed*/
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close(); //!< Closes window when "x" pressed
			}
		}

		window.clear(); //!< Empties the screen of anything that may already be displayed

		/*! Drawing all of my shapes to the screen */
		window.draw(myDot);
		window.draw(myLine);
		window.draw(myTriangle);
		window.draw(mySquare);
		window.draw(myHex);
		window.draw(myArc);
		window.draw(myCircle);
		window.draw(myOctagon);

		window.display(); //!< Displays the screen
	}
}
