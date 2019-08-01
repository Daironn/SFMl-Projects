#pragma once
#include "Button.h"
class Board:private Button

{
public:

	Board() = default;
	~Board() = default;
public:

	void mapFill();
	bool chceckInteraction(std::vector<Button> &);
	void update();
	void draw(sf::RenderWindow & window) ;
	bool if_win() const;
	void fillArrayMembers();

private:

	std::vector<Button> BoardArray;
	unsigned boardInt;

	Button jeden;
	Button dwa;
	Button trzy;
	Button cztery;
	Button piec;
	Button szesc;
	Button siedem;
	Button osiem;
	Button dziewiec;

private:


};

