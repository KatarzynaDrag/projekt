#include "pch.h"
#include "CppUnitTest.h"
#include "../pro/login.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Assert::IsTrue(login("", "password") == "Enter your login", L"Something went wrong");

			Assert::IsTrue(login("login", "") == "Enter your password", L"Something went wrong");

			Assert::IsTrue(login("", "") == "Enter your login", L"Something went wrong");

			Assert::AreEqual(validLogs("kasia", "1234"), true);

			Assert::AreEqual(validLogs("tomek", "5678"), false);

			Assert::IsTrue(login("new_acc", "1234") == "Invalid data, please enter again", L"Something went wrong");
		}
	};
}
