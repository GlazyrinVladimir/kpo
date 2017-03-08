#include "stdafx.h"
#include "Shape.h"

class CCircle : public IShape
{
public:
	CCircle(int x, int y, float r);
	~CCircle() = default;

	float GetPerimetr() const override;
	float GetArea() const override;
	std::string GetType() const override;

private:
	std::string m_type = "Circle";
	int m_xPos;
	int m_yPos;
	float m_radius;
	float m_PI = 3.14f;
};