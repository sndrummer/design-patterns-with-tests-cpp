#pragma once
#include <string>

/**
 * Troll Interface for demonstrating the decorator pattern
 */
class ITroll
{
public:
	virtual std::string getName() const = 0;
	virtual void attack() = 0;

	// note -- you cannot have a pure virtual destructor or an error will occur 
	virtual ~ITroll() = default;
	
};
