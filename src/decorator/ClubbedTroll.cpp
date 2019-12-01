#include "pch.h"
#include "ClubbedTroll.h"
#include <iostream>


ClubbedTroll::ClubbedTroll(ITroll* troll) : mpTroll(troll)
{
}

const std::string& ClubbedTroll::getName() const
{
	return mpTroll->getName();
}

void ClubbedTroll::attack()
{
	mpTroll->attack();
	std::cout << "The troll attacks with a club!!" << std::endl;
}
