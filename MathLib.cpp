#include "MathLib.h"

int MathLib::AddInts(int A, int B)
{
    return 0;
}

int MathLib::SubtractInt(int A, int B)
{
    int Result = A;

    while (true)
    {
        if (Result == A - B) {
            return Result;;
        }

        Result--;
    }
}