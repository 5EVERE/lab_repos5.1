#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest50
{
	TEST_CLASS(UnitTest50)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int x = 1;
			int y = 1;
			int actual = sin(x) / (y * y) + cos(y) / (x * x);
			Assert::AreEqual(1, actual);
		}

		TEST_METHOD(TestMethod2)
		{
			int k = 5;
			int c = 3;
			int f = 2;
			int actual = (k * k - c) / (1 + f);
			Assert::AreEqual(7, actual);
		}

	};
}