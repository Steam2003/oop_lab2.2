#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex a(1, 1);
			double test = a.GetIm();
			Assert::AreEqual(test, 1.0);
		}
	};
}
