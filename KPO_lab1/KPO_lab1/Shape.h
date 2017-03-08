#pragma once
#include <string>
#include <iostream>

class IShape
{
public:
	virtual ~IShape() = default;

	virtual float GetPerimetr() const = 0;
	virtual float GetArea() const = 0;
	virtual std::string GetType() const = 0;
};
