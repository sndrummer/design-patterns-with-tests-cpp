#include "pch.h"
#include "ClubbedTroll.h"
#include <iostream>


ClubbedTroll::ClubbedTroll(ITroll* troll) : TrollDecorator(troll)
{
}

/*
 * Calls the parent getName and decorates/appends to it
 */
std::string ClubbedTroll::getName() const
{
	return std::string(TrollDecorator::getName() + ", the clubbed troll");
}

void ClubbedTroll::attack()
{
	TrollDecorator::attack();
	std::cout << " with a club";
}
