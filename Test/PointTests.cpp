#include "pch.h"
#include "CppUnitTest.h"
#include "..\Library\Point.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		
		TEST_METHOD(ToString_ZeroData_Success)
		{
			// arrange
			rut::Point point{};
			std::string expected{"0, 0, 0"};

			// act
			auto actual = point.ToString();

			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(OperatorEqual_EqualPoints_True)
		{
			// arrange
			rut::Point point1{};
			rut::Point point2{};

			// act & assert
			Assert::IsTrue(point1 == point2);
		}

		TEST_METHOD(PointAreEqual_SamePoints_True)
		{
			// arrange
			rut::Point point1{};
			rut::Point point2{};

			// act & assert
			Assert::AreEqual(point1, point2);
		}
	};
}
