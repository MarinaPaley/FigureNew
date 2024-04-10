#pragma once
#include <string>
#include <iostream>

namespace rut 
{
	struct Point;
	std::wstring ToString(const Point& point);
	bool operator ==(const Point& lha, const Point& rha);
	bool operator !=(const Point& lha, const Point& rha);

	struct Point
	{
		double x;
		double y;
		double z;
		std::string ToString() const;
		friend std::ostream& operator <<(std::ostream& out, const Point& point);
		friend std::istream& operator >>(std::istream& in, Point& point);
	};
}