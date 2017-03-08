#include "stdafx.h"
#include "Shape.h"

class CTriangle : public IShape
{
public:
	CTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
	~CTriangle() = default;

	float GetPerimetr() const override;
	float GetArea() const override;
	std::string GetType() const override;

private:
	float GetLenghtLine(int x1, int y1, int x2, int y2) const;
	std::string m_type = "Triangle";
	int m_xPosFirst;
	int m_yPosFirst;
	int m_xPosSecond;
	int m_yPosSecond;
	int m_xPosThird;
	int m_yPosThird;
};