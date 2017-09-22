#include "stdafx.h"
#include "CppUnitTest.h"
#include "Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		int k = factorial(4);
		TEST_METHOD(Test1)
		{
			Assert::AreNotEqual(0, k);
			Assert::AreEqual(24, k);
		}
		TEST_METHOD(Test2)
		{
			Assert::AreNotEqual(0, k);
		}
	};
}