#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1/PR6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int sum = 0;
			int r[4] = { 10,12,15,18 };

			sumElements(r, 4, sum, 0);

			Assert::AreEqual(45, sum);
		}
	};
}
