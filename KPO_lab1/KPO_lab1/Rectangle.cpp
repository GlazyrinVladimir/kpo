#include "stdafx.h"
#include "Rectangle.h"

CRectangle::CRectangle(int x, int y, float w, float h) :
	m_xPos(x),
	m_yPos(y),
	m_width(w),
	m_heaght(h)
{

}

float CRectangle::GetPerimetr() const
{
	return (float)(m_width + m_heaght) * 2;
}

float CRectangle::GetArea() const
{
	return (float)(m_width * m_heaght);
}

std::string  CRectangle::GetType() const
{
	return m_type;
}
