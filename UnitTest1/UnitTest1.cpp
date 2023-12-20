#include "pch.h"
#include "CppUnitTest.h"
#include "../pro/funkcje.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(logarytmNaturalny(2), 0.693147, 0.1);

			double array[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
			Assert::AreEqual(odchylenieStandardowe(array, 5), 1.58114, 0.1);

			Assert::AreEqual(wartoscExponentu(1), 2.71828, 0.1);

			Assert::AreEqual(logarytmDziesietny(2), 0.30103, 0.1);
		}
	};
}
