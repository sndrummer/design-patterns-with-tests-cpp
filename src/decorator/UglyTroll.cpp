#include "pch.h"
#include "UglyTroll.h"

UglyTroll::UglyTroll(ITroll* troll) : TrollDecorator(troll)
{
}

void UglyTroll::attack()
{
	TrollDecorator::attack();
	std::cout << "... gross"; 
}


std::string UglyTroll::getName() const
{
	return std::string(TrollDecorator::getName()) + ", an ugly dude";
}
