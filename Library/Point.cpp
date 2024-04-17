#include <sstream>
#include <limits>
#include "Point.h"

namespace rut
{
	std::wstring ToString(const Point& point)
	{
		std::wstringstream buffer{};
		buffer << point.x << L", " << point.y << L", " << point.z;

		return buffer.str();
	}


	bool operator==(const Point& lha, const Point& rha)
	{
		return std::abs(lha.x - rha.x) <= std::numeric_limits<double>::epsilon()
			&& (std::abs(lha.y - rha.y) <= std::numeric_limits<double>::epsilon())
			&& (std::abs(lha.z - rha.z) <= std::numeric_limits<double>::epsilon());
	}

	bool operator!=(const Point& lha, const Point& rha)
	{
		return !(lha == rha);
	}

	std::ostream& operator<<(std::ostream& out, const Point& point)
	{
		return out << point.ToString();
	}

	std::istream& operator>>(std::istream& in, Point& point)
	{
		return in >> point.x >> point.y >> point.z;
	}

	Point::Point(const double x, const double y, const double z)
		: x{x}, y{y}, z{z}
	{
	}

	std::string Point::ToString() const
	{
		std::stringstream buffer{};
		buffer << this->x << ", " << this->y << ", " << this->z;

		return buffer.str();
	}
}