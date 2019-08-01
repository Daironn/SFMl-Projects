#include "pch.h"
#include "Board.h"

bool Board::if_win() const
{
	if(BoardArray[0].getstate() == BoardArray[1].getstate() && BoardArray[1].getstate() == BoardArray[2].getstate())
	
		return true;

	else if(BoardArray[3].getstate() == BoardArray[4].getstate() && BoardArray[4].getstate() == BoardArray[5].getstate())
	
		return true;

	else if (BoardArray[6].getstate() == BoardArray[7].getstate() && BoardArray[7].getstate() == BoardArray[8].getstate())
	
		return true;

	else if (BoardArray[0].getstate() == BoardArray[3].getstate() && BoardArray[3].getstate() == BoardArray[6].getstate())
	
		return true;

	else if (BoardArray[1].getstate() == BoardArray[4].getstate() && BoardArray[4].getstate() == BoardArray[7].getstate())
	
		return true;

	else if (BoardArray[2].getstate() == BoardArray[5].getstate() && BoardArray[5].getstate() == BoardArray[8].getstate())
	
		return true;

	else if (BoardArray[0].getstate() == BoardArray[5].getstate() && BoardArray[5].getstate() == BoardArray[8].getstate())
	
		return true;

	else if (BoardArray[3].getstate() == BoardArray[5].getstate() && BoardArray[5].getstate() == BoardArray[7].getstate())
		
		return true;
	
	else return false;
}

void Board::mapFill()
{
	boardInt = 0;
	for (int i = 0; i < 3; i++) {
		std::cout << "siema\n";
		for (int j = 0; j < 3; j++) {

			BoardArray.push_back(Button(0 + spaceX, 0 + spaceY, "EXO.png"));
			spaceX += 169;
			boardInt++;
			std::cout << "elo\n";
		}
		spaceY += 169;
	}
}

void Board::draw(sf::RenderWindow & window)
{
	for (int i = 0; i < BoardArray.size(); i++) {

		BoardArray[i].draw(window);
	}
}
