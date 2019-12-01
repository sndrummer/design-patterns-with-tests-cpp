#pragma once
#include <decorator/ITroll.h>

/*
 * Decorator abstract class that adds functionality to the Troll
 * Honestly not the greatest use of a decorator but at least you get the idea
 */
class TrollDecorator : public ITroll
{
protected:
	ITroll* mpTroll; 

public:
	explicit TrollDecorator(ITroll* troll);
	void attack() override;
	std::string getName() const override;
	virtual ~TrollDecorator() = 0;
	
	TrollDecorator(const TrollDecorator& other) = delete;
	TrollDecorator(TrollDecorator&& other) noexcept = delete;
	TrollDecorator& operator=(const TrollDecorator& other) = delete;
	TrollDecorator& operator=(TrollDecorator&& other) noexcept = delete;
};

// To prevent this class from being instantiated use pure virtual destructor and then define it here
inline TrollDecorator::~TrollDecorator() = default;

