#include "pch.h"
#include "../1.1/FloatRange.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RangeTests
{
    TEST_CLASS(FloatRangeLogicTests)
    {
    public:
        TEST_METHOD(TestRangeCheckBoundaries)
        {
            FloatRange r;
            r.Init(10.0, 20.0);

            Assert::IsTrue(r.RangeCheak(10.0));
            Assert::IsTrue(r.RangeCheak(20.0));
        }

        TEST_METHOD(TestRangeCheckOutside)
        {
            FloatRange r;
            r.Init(10.0, 20.0);

            Assert::IsFalse(r.RangeCheak(9.9));
            Assert::IsFalse(r.RangeCheak(20.1));
        }
    };
}