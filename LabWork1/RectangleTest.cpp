#include "pch.h"
#include "CppUnitTest.h"
#include "../LabW1rect/Rectangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTest
{
	TEST_CLASS(RectangleTe)
	{
	public:
		
		
		TEST_METHOD(move)
		{
			Rectangle R0(5, 6, 2, 3);
			R0.move(3, -2);
			Assert::AreEqual(R0.get_coordinates()[0], 5);
			Assert::AreEqual(R0.get_coordinates()[1], 1);
			Assert::AreEqual(R0.get_coordinates()[2], 8);
			Assert::AreEqual(R0.get_coordinates()[3], 4);
		}
		TEST_METHOD(change_size)
		{
			Rectangle R1(5, 6, 2, 3);
			R1.change_size(2, 3);
			Assert::AreEqual(R1.get_coordinates()[0], 2);
			Assert::AreEqual(R1.get_coordinates()[1], 3);
			Assert::AreEqual(R1.get_coordinates()[2], 7);
			Assert::AreEqual(R1.get_coordinates()[3], 9);
		}
		TEST_METHOD(increment)
		{
			Rectangle R1(2, 3, 5, 7);
			++R1;
			Assert::AreEqual(R1.get_coordinates()[0], 3);
			Assert::AreEqual(R1.get_coordinates()[1], 4);
			Assert::AreEqual(R1.get_coordinates()[2], 6);
			Assert::AreEqual(R1.get_coordinates()[3], 8);
		}
		TEST_METHOD(decrement)
		{
			Rectangle R1(2, 3, 5, 7);
			--R1;
			Assert::AreEqual(R1.get_coordinates()[0], 1);
			Assert::AreEqual(R1.get_coordinates()[1], 2);
			Assert::AreEqual(R1.get_coordinates()[2], 4);
			Assert::AreEqual(R1.get_coordinates()[3], 6);
		}
		TEST_METHOD(minus)
		{
			Rectangle R1(5, 6, 2, 3);
			Rectangle R2(3, 2, 7, 4);
			Rectangle minus = R1 - R2;
			Assert::AreEqual(minus.get_coordinates()[0], 3);
			Assert::AreEqual(minus.get_coordinates()[1], 3);
			Assert::AreEqual(minus.get_coordinates()[2], 5);
			Assert::AreEqual(minus.get_coordinates()[3], 4);

		}
		TEST_METHOD(sum)
		{
			Rectangle R1(5, 6, 2, 3);
			Rectangle R2(3, 2, 7, 4);
			Rectangle sum = R1 + R2;
			Assert::AreEqual(sum.get_coordinates()[0], 2);
			Assert::AreEqual(sum.get_coordinates()[1], 2);
			Assert::AreEqual(sum.get_coordinates()[2], 7);
			Assert::AreEqual(sum.get_coordinates()[3], 6);

		}

		TEST_METHOD(sumequal)
		{
			Rectangle R1(5, 6, 2, 3);
			Rectangle R2(3, 2, 7, 4);
			R1 += R2;
			Assert::AreEqual(R1.get_coordinates()[0], 2);
			Assert::AreEqual(R1.get_coordinates()[1], 2);
			Assert::AreEqual(R1.get_coordinates()[2], 7);
			Assert::AreEqual(R1.get_coordinates()[3], 6);

		}
	};
}
