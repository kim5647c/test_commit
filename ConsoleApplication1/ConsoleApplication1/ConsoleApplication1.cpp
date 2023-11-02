#include <iostream>
#include <iomanip>

using namespace std;

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;

int ary[DIM1][DIM2];

int main()
{

    for (int i = 0; i < DIM1; i++)
    {
        for (int j = 0; j < DIM2; j++)
        {
            ary[i][j] = (i + 1) * 10 + (j + 1);
        }
    }
}