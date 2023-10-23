#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.5/lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLAB55
{
	TEST_CLASS(UnitTestLAB55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double test;
			test = S(5, 10);
			double z = abs(test - 36);
			Assert::IsTrue(z < 1e-5);
		}
	};
}
