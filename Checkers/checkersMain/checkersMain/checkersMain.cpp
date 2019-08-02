#include "pch.h"
#include "Board.h"
#include "Checker.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <iostream>

int main()
{
	bool turnA;

	srand(time(NULL));
	int randNum = rand() % 2; 

	turnA = (randNum == 1) ? true : false;

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");

	Board elo(112,112);
	Checker siema(45);
	elo.fill();
	siema.fill();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Color(139, 69, 19));

		elo.tagging(sf::Vector2f(sf::Mouse::getPosition(window)), siema);

		elo.update(siema);
		siema.update(sf::Vector2f(sf::Mouse::getPosition(window)), elo, turnA);
		elo.check(sf::Vector2f(sf::Mouse::getPosition(window)), siema);
		elo.draw(window);
		siema.draw(window);

		window.display();
	}
	return 0;
}

// zainplementować typ królowej
// przenieść rozwiązania na czerwone
// z końcowych lini wyjebać zbędne rzeczy
//zamienic isblack na isred