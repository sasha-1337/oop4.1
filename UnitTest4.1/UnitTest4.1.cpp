#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop4.1\oop4.2\Square.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Square a(4);
			double t = a.S();
			Assert::AreEqual(t, 16.0);
		}
	};
}
