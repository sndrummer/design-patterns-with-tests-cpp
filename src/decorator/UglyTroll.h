#pragma once
#include <decorator/TrollDecorator.h>

class UglyTroll : public TrollDecorator 
{
public:
	explicit UglyTroll(ITroll* troll);
	void attack() override;
	std::string getName() const override;
};

