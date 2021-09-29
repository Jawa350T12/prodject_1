#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double rast1 = 0, rast2 = 0, rast3 = 0;
    double P = 0, S = 0, p = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    rast1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    rast2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    rast3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    P = rast1 + rast2 + rast3;
    p = P / 2;
    S = sqrt(p * (p - rast1) * (p - rast2) * (p - rast3));
    
    cout << "Perimetr = " << P <<"\n";
    cout << "Squer = " << S<< "\n";
}