#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <iostream>

enum state {O = 0, X, E};

class ButtonClass
	//zamienic 169 na zmienna
{
public:
	ButtonClass() = default;
	ButtonClass(float x, float y, float w, float h, std::string Tname);
	~ButtonClass();
public:

	void draw(sf::RenderWindow & window);
	void update(sf::Vector2f mousePos, state & turn);
	state checkState() const { return currentState; };
	friend bool checkWhoWon(std::vector<ButtonClass*> &);
private:
	sf::Vector2f position;
	sf::Vector2f size;

	sf::RectangleShape buttonShape;
	sf::Texture buttonTexture;

	bool isPresed = false;
	state currentState = state::E;
};

