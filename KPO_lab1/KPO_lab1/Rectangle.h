#include "stdafx.h"
#include "Shape.h"

class CRectangle : public IShape
{
public:
	CRectangle(int x, int y, float w, float h);
	~CRectangle() = default;

	float GetPerimetr() const override;
	float GetArea() const override;
	std::string GetType() const override;

private:
	std::string m_type = "Rectangle";
	int m_xPos;
	int m_yPos;
	float m_width;
	float m_heaght;
};