#include "pch.h"
#include "ButtonClass.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <iostream>
#include <vector>


state turn = state::O;
bool checkWhoWon(std::vector<ButtonClass*> &);
int main()
{



	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");

	ButtonClass test0(0 + 45, 0 + 45, 169, 169, "EXO.png");
	ButtonClass test1(169 + 45, 0 + 45, 169, 169, "EXO.png");
	ButtonClass test2(338 + 45, 0 + 45, 169, 169, "EXO.png");
	ButtonClass test3(0 + 45, 169 + 45, 169, 169, "EXO.png");
	ButtonClass test4(169 + 45, 169 + 45, 169, 169, "EXO.png");
	ButtonClass test5(338 + 45, 169 + 45, 169, 169, "EXO.png");
	ButtonClass test6(0 + 45, 338 + 45, 169, 169, "EXO.png");
	ButtonClass test7(169 + 45, 338 + 45, 169, 169, "EXO.png");
	ButtonClass test8(338 + 45, 338 + 45, 169, 169, "EXO.png");

	std::vector<ButtonClass*> ButtonAray;

	ButtonAray.push_back(&test0);
	ButtonAray.push_back(&test1);
	ButtonAray.push_back(&test2);
	ButtonAray.push_back(&test3);
	ButtonAray.push_back(&test4);
	ButtonAray.push_back(&test5);
	ButtonAray.push_back(&test6);
	ButtonAray.push_back(&test7);
	ButtonAray.push_back(&test8);



	while (window.isOpen())
	{
		checkWhoWon(ButtonAray);
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::White);
		for (int i = 0; i < ButtonAray.size(); i++) {
			ButtonAray[i]->draw(window);

		}
		for (int i = 0; i < ButtonAray.size(); i++) {
			ButtonAray[i]->update(sf::Vector2f(sf::Mouse::getPosition(window)), turn);

		}
		window.display();

		
	}

	return 0;
}

