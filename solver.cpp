#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 0, b = 0 , c = 0;

    double answer;

    cout << "Quadratic Equation Solver\n" << endl;
    cout << " a = " << a << ", b = " << b << ", c = " << c << "\n"<< endl;
    cout << "Enter a number for a:" << endl;
    cin >> a;

    if (a != 0){

        cout << " a = " << a << ", b = " << b << ", c = " << c << "\n" << endl;
        cout << "Enter a number for b:" << endl;
        cin >> b;
        cout << " a = " << a << ", b = " << b << ", c = " << c << "\n" << endl;
        cout << "Enter a number for c:" << endl;
        cin >> c;
        cout << " a = " << a << ", b = " << b << ", c = " << c << "\n" << endl;

        double answer1 = (-b+sqrt(pow(2, b)-4*a*c))/2*a;

        cout << "x1 = " << answer1 << endl;

        double answer2 = (-b-sqrt(b*b-4*a*c))/2*a;

        cout << "x2 = " << answer2 << endl;

    } else {

        cout << " \n" << endl;
        cout << "Invalid input" << endl;

    }

    return 0;
}
