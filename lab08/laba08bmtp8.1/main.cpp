#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x,y,z,S;
    cout << "¬вед≥ть значенн€ x,y,z:";
    cin >> x >> y >> z;
    S = sqrt(abs(pow(z,2)*0.5*y)) +(M_PI*x*exp(abs(y)))/y;
    cout << "S =" << S << endl;
    return 0;
}
