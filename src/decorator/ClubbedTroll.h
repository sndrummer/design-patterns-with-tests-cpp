#pragma once
#include "TrollDecorator.h"


// Forward declare

/*
 * Decorator Class
 * A wrapper for a Troll class that adds a club
 */
class ClubbedTroll : public TrollDecorator
{
	
public:
	// Uses composition to wrap a Troll class
	explicit ClubbedTroll(ITroll* troll);

	// Delegates the getName to the ITroll member
	std::string getName() const override;

	// Adds functionality to the attack
	void attack() override;

	// Default destructor
	~ClubbedTroll() override = default;

};
