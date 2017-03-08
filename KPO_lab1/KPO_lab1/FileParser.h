#include "stdafx.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

struct Point
{
	int x, y;
};

void FileParser(std::vector<std::shared_ptr<const IShape>> & shapes)
{
	std::ifstream inputF("input.txt");
	std::string type;
	if (inputF.is_open())
	{
		while (!inputF.eof())
		{
			inputF >> type;
			if (type == "Rectangle")
			{
				Point point;
				float w;
				float h;
				inputF >> point.x;
				inputF >> point.y;
				inputF >> w;
				inputF >> h;
				shapes.insert(shapes.begin(), std::shared_ptr<IShape>(new CRectangle(point.x, point.y, w, h)));
			}
			else if (type == "Circle")
			{
				Point point;
				float radius;
				inputF >> point.x;
				inputF >> point.y;
				inputF >> radius;
				shapes.insert(shapes.begin(), std::shared_ptr<IShape>(new CCircle(point.x, point.y, radius)));
			}
			else if (type == "Triangle")
			{
				Point point1;
				Point point2;
				Point point3;
				inputF >> point1.x;
				inputF >> point1.y;
				inputF >> point2.x;
				inputF >> point2.y;
				inputF >> point3.x;
				inputF >> point3.y;
				shapes.insert(shapes.begin(), std::shared_ptr<IShape>(new CTriangle(point1.x, point1.y, point2.x, point2.y, point3.x, point3.y)));
			}
		}
	}
	else
	{
		std::cout << "file is empty";
	}
}

void LoadShapes()
{
	std::vector<std::shared_ptr<const IShape>> shapes;
	std::ofstream outputF("output.txt");
	FileParser(shapes);

	for (auto shape : shapes)
	{
		outputF << shape->GetType() << " Area: " << shape->GetArea() << " Perimetr: " << shape->GetPerimetr() << std::endl;
	}
}