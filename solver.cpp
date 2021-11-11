#include <iostream>
#include<math.h>
using namespace std;

int main()
{

    int mode;

    cout << "\n Quick Math v0.1" << endl;
    cout << "  Choose a mode." << endl;
    cout << " " << endl;
    cout << " 1. Quadratic Equation" << endl;
    cout << " 2. Direct and Indirect Variation" << endl;
    cout << " " << endl;
    cin >> mode;
    cout << " " << endl;

    if (mode = 1)
    {
        cout << " Quadratic Equation " << endl;

        double a = 0, b = 0 , c = 0;
        double answer;

        cout << " " << endl;
        cout << " a = " << a << ", b = " << b << ", c = " << c << "\n"<< endl;
        cout << " Enter a number for a:" << endl;
        cin >> a;

            if (a != 0)
            {

            cout << " " << endl;
            cout << " a = " << a << ", b = " << b << ", c = " << c << "\n" << endl;
            cout << " Enter a number for b:" << endl;
            cin >> b;

            cout << " " << endl;
            cout << " a = " << a << ", b = " << b << ", c = " << c << "\n" << endl;
            cout << " Enter a number for c:" << endl;
            cin >> c;

            cout << " a = " << a << ", b = " << b << ", c = " << c << "\n" << endl;

            double d = b*b-4*a*c;
            string noroot = "There are no real roots.", realroot = "There is one real root.", tworealroot = "There are two real roots.";
            double answer1 = (-b - sqrt(d)) / (2*a), answer2 = (-b + sqrt(d)) / (2*a);

                if (answer1 && answer2 >= 0)
                {

                    cout << " x1 = " << answer1 << endl;
                    cout << " x2 = " << answer2 << endl;
                    cout << "\n Discriminant: " << d << endl;

                    if (d < 0) {

                        cout << " Nature of Roots: " << noroot << endl;

                    } else if (d =  0) {

                        cout << " Nature of Roots: " << realroot << endl;

                    } else {

                        cout << " Nature of Roots: " << tworealroot << endl;

                    }

                } else if (answer1 == 0)

                {

                    cout << " x1 = i" << endl;
                    cout << " x2 = " << answer2 << endl;
                    cout << "\n Discriminant: " << d << endl;

                    if (d < 0) {

                        cout << " Nature of Roots: " << noroot << endl;

                    } else if (d =  0) {

                        cout << " Nature of Roots: " << realroot << endl;

                    } else {

                        cout << " Nature of Roots: " << tworealroot << endl;

                    }

                } else if (answer2 == 0) {

                    cout << " x1 = " << answer1 << endl;
                    cout << " x2 = i" << endl;
                    cout << "\n Discriminant: " << d << endl;

                    if (d < 0) {

                        cout << " Nature of Roots: " << noroot << endl;

                    } else if (d =  0) {

                        cout << " Nature of Roots: " << realroot << endl;

                    } else {

                        cout << " Nature of Roots: " << tworealroot << endl;

                    }

                } else {

                    cout << " x1 = i" << endl;
                    cout << " x2 = i" << endl;
                    cout << "\n Discriminant: " << d << endl;6

                    if (d < 0) {

                        cout << " Nature of Roots: " << noroot << endl;

                    } else if (d =  0) {

                        cout << " Nature of Roots: " << realroot << endl;

                    } else {

                        cout << " Nature of Roots: " << tworealroot << endl;

                    }
                }


        } else {

        cout << " \n" << endl;
        cout << " Invalid input" << endl;

    }

    } else if (mode == 2)
    {

        cout << " Direct and Inverse Variation" << endl;

    } else {

        cout << " Invalid input" << endl;

    }

    return 0;
}
