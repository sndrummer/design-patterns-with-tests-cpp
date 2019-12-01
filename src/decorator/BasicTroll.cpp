#include <pch.h>
#include <decorator/BasicTroll.h>
#include <iostream>

BasicTroll::BasicTroll(const char* name) : mName(name)
{
}

void BasicTroll::attack()
{
	std::cout << "The Troll attacks";
}

std::string BasicTroll::getName() const
{
	return mName;
}

