#include "pch.h"
#include "Board.h"
#include "Checker.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <iostream>

//Do you like pasta? I've got a lot of spaghetti code here

int main()
{
	bool turnA;

	srand(time(NULL));
	int randNum = rand() % 2; 

	turnA = (randNum == 1) ? true : false;

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");

	Board board(112,112);
	Checker checker(45);
	board.fill();
	checker.fill();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Color(139, 69, 19));

		board.tagging(sf::Vector2f(sf::Mouse::getPosition(window)), checker);

		board.update(checker);
		checker.update(sf::Vector2f(sf::Mouse::getPosition(window)), board, turnA);
		board.check(sf::Vector2f(sf::Mouse::getPosition(window)), checker);
		board.draw(window);
		checker.draw(window);

		window.display();
	}
	return 0;
}

