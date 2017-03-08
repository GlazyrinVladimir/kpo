#include "stdafx.h"
#include "Circle.h"

CCircle::CCircle(int x, int y, float r) :
	m_xPos(x),
	m_yPos(y),
	m_radius(r)
{

}

float CCircle::GetPerimetr() const
{
	return (float)2 * m_PI * m_radius;
}

float CCircle::GetArea() const
{
	return (float)m_PI * pow(m_radius, 2);
}

std::string  CCircle::GetType() const
{
	return m_type;
}