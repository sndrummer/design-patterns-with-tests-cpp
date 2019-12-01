#include "pch.h"
#include "TrollDecorator.h"

TrollDecorator::TrollDecorator(ITroll* troll) : mpTroll(troll)
{
}

// Delegate the attack method
void TrollDecorator::attack()
{
	mpTroll->attack();
}

// Delegate the getName method
std::string TrollDecorator::getName() const
{
	return mpTroll->getName();
}
