#include <iostream>
#include<math.h>
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

        double d = b*b-4*a*c;

        double answer1 = (-b + sqrt(d)) / (2*a), answer2 = (-b - sqrt(d)) / (2*a);

        if (answer1 && answer2 >= 0)
        {
            cout << "x1 = " << answer1 << endl;
            cout << "x2 = " << answer2 << endl;
        } else if (answer1 == 0) {
            cout << "x1 = i" << endl;
            cout << "x2 = " << answer2 << endl;
        } else if (answer2 == 0) {
            cout << "x1 = " << answer1 << endl;
            cout << "x2 = i" << endl;
        } else {
            cout << "x1 = i" << endl;
            cout << "x2 = i" << endl;
        }


    } else {

        cout << " \n" << endl;
        cout << "Invalid input" << endl;

    }

    return 0;
}
