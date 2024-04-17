#include "pch.h"
#include "..\Library\Point.h"

TEST(Success, ToString)
{
	// arrange
	rut::Point point{};
	std::string expected{ "0, 0, 0" };

	// act
	auto actual = point.ToString();

	// assert
    EXPECT_EQ(expected, actual);
}