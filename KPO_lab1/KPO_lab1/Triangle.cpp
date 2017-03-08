#include "stdafx.h"
#include "Triangle.h"

CTriangle::CTriangle(int x1, int y1, int x2, int y2, int x3, int y3) :
	m_xPosFirst(x1),
	m_yPosFirst(y1),
	m_xPosSecond(x2),
	m_yPosSecond(y2),
	m_xPosThird(x3),
	m_yPosThird(y3)
{
}

float CTriangle::GetLenghtLine(int x1Line, int y1Line, int x2Line, int y2Line) const
{
	return float(sqrt(pow(x2Line - x1Line, 2) + pow(y2Line - y1Line, 2)));
}

float CTriangle::GetPerimetr() const
{
	float a = GetLenghtLine(m_xPosFirst, m_yPosFirst, m_xPosSecond, m_yPosSecond);
	float b = GetLenghtLine(m_xPosFirst, m_yPosFirst, m_xPosThird, m_yPosThird);
	float c = GetLenghtLine(m_xPosThird, m_yPosThird, m_xPosSecond, m_yPosSecond);
	return (float)(a + b + c);
}

float CTriangle::GetArea() const
{
	float a = GetLenghtLine(m_xPosFirst, m_yPosFirst, m_xPosSecond, m_yPosSecond);
	float b = GetLenghtLine(m_xPosFirst, m_yPosFirst, m_xPosThird, m_yPosThird);
	float c = GetLenghtLine(m_xPosThird, m_yPosThird, m_xPosSecond, m_yPosSecond);
	float halfPerimetr = (a + b + c) / 2;
	return (float)(sqrt(halfPerimetr * (halfPerimetr - a) * (halfPerimetr - b) * (halfPerimetr - c)));
}

std::string  CTriangle::GetType() const
{
	return m_type;
}