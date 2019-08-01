#include "pch.h"
#include "ButtonClass.h"


ButtonClass::ButtonClass(float x, float y, float w, float h, std::string Tname)
	:position(x,y), size(w,h)
{
	if (!buttonTexture.loadFromFile(Tname)) {
		std::cout << "error occured";
	}
	buttonShape.setSize(size);
	buttonShape.setPosition(position);
	buttonShape.setTexture(&buttonTexture);
	buttonShape.setTextureRect(sf::IntRect(0, 0, 169, 169));

}


ButtonClass::~ButtonClass()
{
}

void ButtonClass::draw(sf::RenderWindow & window)
{
	window.draw(buttonShape);
}

void ButtonClass::update(sf::Vector2f mousePos, state & turn)
{
	if (buttonShape.getGlobalBounds().contains(mousePos)) {
		
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left) && isPresed == false){
			
			isPresed = true;
			std::cout << "eluwa";
			if (turn == state::X) {
				buttonShape.setTextureRect(sf::IntRect(169, 0, 169, 169));
				currentState = turn;
				turn = state::O;
			}
			else if (turn == state::O) {
				buttonShape.setTextureRect(sf::IntRect(338, 0, 169, 169));
				currentState = turn;
				turn = state::X;
			}
			
			
		}
	}
}

bool checkWhoWon(std::vector<ButtonClass*>& ButtonArray)
{
	if (ButtonArray[0]->checkState() == state::O 
		&& ButtonArray[1]->checkState() == state::O 
		&& ButtonArray[2]->checkState() == state::O) {

			ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[1]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[3]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[5]->checkState() == state::O) {

			ButtonArray[3]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[5]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[6]->checkState() == state::O
		&& ButtonArray[7]->checkState() == state::O
		&& ButtonArray[8]->checkState() == state::O) {

			ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[7]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			return true;
	}
	else if (ButtonArray[0]->checkState() == state::O
		&& ButtonArray[3]->checkState() == state::O
		&& ButtonArray[6]->checkState() == state::O) {

			ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[3]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[1]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[7]->checkState() == state::O) {

			ButtonArray[1]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[7]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[2]->checkState() == state::O
		&& ButtonArray[5]->checkState() == state::O
		&& ButtonArray[8]->checkState() == state::O) {

			ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[5]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[0]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[8]->checkState() == state::O) {

			ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(1521, 0, 169, 169));
			ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1521, 0, 169, 169));
			ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(1521, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[2]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[6]->checkState() == state::O) {

			ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(1690, 0, 169, 169));
			ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1690, 0, 169, 169));
			ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(1690, 0, 169, 169));
			
			return true;
	} else 	if (ButtonArray[0]->checkState() == state::O 
		&& ButtonArray[1]->checkState() == state::O 
		&& ButtonArray[2]->checkState() == state::O) {

			ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[1]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[3]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[5]->checkState() == state::O) {

			ButtonArray[3]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[5]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[6]->checkState() == state::O
		&& ButtonArray[7]->checkState() == state::O
		&& ButtonArray[8]->checkState() == state::O) {

			ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[7]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(1014, 0, 169, 169));
			return true;
	}
	else if (ButtonArray[0]->checkState() == state::O
		&& ButtonArray[3]->checkState() == state::O
		&& ButtonArray[6]->checkState() == state::O) {

			ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[3]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[1]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[7]->checkState() == state::O) {

			ButtonArray[1]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[7]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[2]->checkState() == state::O
		&& ButtonArray[5]->checkState() == state::O
		&& ButtonArray[8]->checkState() == state::O) {

			ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[5]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));
			ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(845, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[0]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[8]->checkState() == state::O) {

			ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(1521, 0, 169, 169));
			ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1521, 0, 169, 169));
			ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(1521, 0, 169, 169));

			return true;
	}
	else if (ButtonArray[2]->checkState() == state::O
		&& ButtonArray[4]->checkState() == state::O
		&& ButtonArray[6]->checkState() == state::O) {

		ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(1352, 0, 169, 169));
		ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1352, 0, 169, 169));
		ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(1352, 0, 169, 169));
			
			return true;
			
			
			// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


	}
	else 	if (ButtonArray[0]->checkState() == state::X
	&& ButtonArray[1]->checkState() == state::X
	&& ButtonArray[2]->checkState() == state::X) {

	ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));
	ButtonArray[1]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));
	ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));

	return true;
	}
	else if (ButtonArray[3]->checkState() == state::X
	&& ButtonArray[4]->checkState() == state::X
	&& ButtonArray[5]->checkState() == state::X) {

	ButtonArray[3]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));
	ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));
	ButtonArray[5]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));

	return true;
	}
	else if (ButtonArray[6]->checkState() == state::X
	&& ButtonArray[7]->checkState() == state::X
	&& ButtonArray[8]->checkState() == state::X) {

	ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));
	ButtonArray[7]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));
	ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(676, 0, 169, 169));
	return true;
	}
	else if (ButtonArray[0]->checkState() == state::X
	&& ButtonArray[3]->checkState() == state::X
	&& ButtonArray[6]->checkState() == state::X) {

	ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));
	ButtonArray[3]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));
	ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));

	return true;
	}
	else if (ButtonArray[1]->checkState() == state::X
	&& ButtonArray[4]->checkState() == state::X
	&& ButtonArray[7]->checkState() == state::X) {

	ButtonArray[1]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));
	ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));
	ButtonArray[7]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));

	return true;
	}
	else if (ButtonArray[2]->checkState() == state::X
	&& ButtonArray[5]->checkState() == state::X
	&& ButtonArray[8]->checkState() == state::X) {

	ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));
	ButtonArray[5]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));
	ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(507, 0, 169, 169));

	return true;
	}
	else if (ButtonArray[0]->checkState() == state::X
	&& ButtonArray[4]->checkState() == state::X
	&& ButtonArray[8]->checkState() == state::X) {

	ButtonArray[0]->buttonShape.setTextureRect(sf::IntRect(1183, 0, 169, 169));
	ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1183, 0, 169, 169));
	ButtonArray[8]->buttonShape.setTextureRect(sf::IntRect(1183, 0, 169, 169));

	return true;
	}
	else if (ButtonArray[2]->checkState() == state::X
	&& ButtonArray[4]->checkState() == state::X
	&& ButtonArray[6]->checkState() == state::X) {

	ButtonArray[2]->buttonShape.setTextureRect(sf::IntRect(1352, 0, 169, 169));
	ButtonArray[4]->buttonShape.setTextureRect(sf::IntRect(1352, 0, 169, 169));
	ButtonArray[6]->buttonShape.setTextureRect(sf::IntRect(1352, 0, 169, 169));

	return true;
	}
}
