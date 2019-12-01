#pragma once
#include "decorator/ITroll.h"

/*
 * Decorator Class
 * A wrapper for a Troll class that adds a club
 */
class ClubbedTroll : public ITroll
{
public:
	explicit ClubbedTroll(ITroll* troll);
	const std::string& getName() const override;
	void attack() override;
	~ClubbedTroll() override = default;

private:
	ITroll* mpTroll;
};
