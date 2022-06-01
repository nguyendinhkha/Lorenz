#include <iostream>
#include "math.h"

using namespace std;
#define N 1000

int main(int argc, char** argv)
{    
    double x = 0.01;
    double y = 0;
    double z = 0;

    float a = 10;
    float b = 28;
    float c = 8.0 / 3.0;

    double dx, dy, dz;
    double dt = 0.01;

    for (int i = 0; i < N; i++)
    {
       dx = x + (a * (y - x)) * dt;
       dy = y + (x * (b - z) - y) * dt;
       dz = z + (x * y - c * z) * dt;
       x = dx;  // x = 0.01 + (10 * (0 - 0.01)) * 0.01 = 0.009
       y = dy;  // y = 0 + (0.01 *(28 - 0)) * 0.01 = 0.0028
       z = dz;  // z = 0 + (0.01 * 0 - (8.0 / 3.0) * 0) * 0.01 = 0

       cout << i << "   " << x << "   " << y << "   " << z << endl;
    }
    /*
    x = x + dx;
    y = y + dy;
    z = z + dz;
    */
    return 0;
}