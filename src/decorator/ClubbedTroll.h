#pragma once
#include "decorator/ITroll.h"

/*
 * Decorator Class
 * A wrapper for a Troll class that adds a club
 */
class ClubbedTroll : public ITroll
{
public:
	// Uses composition to wrap a Troll class
	explicit ClubbedTroll(ITroll* troll);

	// Delegates the getName to the ITroll member
	const std::string& getName() const override;

	// Adds functionality to the attack
	void attack() override;

	// Default destructor
	~ClubbedTroll() override = default;

private:
	ITroll* mpTroll;
};
