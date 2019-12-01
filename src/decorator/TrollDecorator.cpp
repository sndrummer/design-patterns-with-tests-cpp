#include "pch.h"
#include "TrollDecorator.h"

TrollDecorator::TrollDecorator(ITroll* troll) : mpTroll(troll)
{
}

void TrollDecorator::attack()
{
	mpTroll->attack();
}

std::string TrollDecorator::getName() const
{
	return mpTroll->getName();
}
