#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 7.2 rek/laba 7.2 rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab72rek
{
	TEST_CLASS(lab72rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            
                int N = 5;
                int** a = new int* [N];
                for (int i = 0; i < N; i++)
                {
                    a[i] = new int[N];
                    for (int j = 0; j < N; j++)
                    {
                        a[i][j] = 1;
                    }
                }

                int mineven = 0;
                
                SearchMinEven(a, N, 0, mineven);
                
                Assert::AreEqual(0, mineven);
                for (int i = 0; i < N; i++)
                {
                    delete[] a[i];
                }
                delete[] a;

            

		}
	};
}
