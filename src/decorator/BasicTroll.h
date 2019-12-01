#pragma once
#include "ITroll.h"

/**
 * BasicTroll class that serves as a basic implementation of the Itroll interface
 * Note* final means that derived classes will not continue to override the ITroll methods 
 */
class BasicTroll final : public ITroll
{
public:
	BasicTroll(const char* name);
	~BasicTroll() override = default;

	void attack() override;
	const std::string& getName() const override;
	
	
private:
	std::string mName;
};

