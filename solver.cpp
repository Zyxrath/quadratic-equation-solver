#include <iostream>
#include <string>
#include <cmath>
#include <complex>
using namespace std;

int mode;
string yon = "N";

void Menu()
{
    string version = "v0.1";

    cout << "\n Quick Math: " << version << endl;
    cout << "\n 1. Quadratic Equation" << endl;
    cout << "\n Choose a mode: ";
    cin >> mode;
}

void ExitMenu()
{
    cout << "\n Calculation done. \n" << endl;
    cout << "\n Exit? (Y/N): ";
    cin >> yon;

    if (yon == "N")
    {
        Menu();
    }
}

void QuadraticEquation()
{
    cout << "\n Quadratic Equation \n" << endl;

    double a, b, c, d, x1, x2;
    string op1, op2, roots;

    cout << " Enter the value of a: ";
    cin >> a;

        if (a != 0){

        cout << " Enter plus or minus: ";
        cin >> op1;

        cout << " Enter the value of b: ";
        cin >> b;

        cout << " Enter plus or minus: ";
        cin >> op2;

        cout << " Enter the value of c: ";
        cin >> c;

        if (op1 == "plus" && op2 == "plus")
        {
            op1 = "+";
            op2 = "+";
        } else if (op1 == "plus" && op2 == "minus")
        {
            op1 = "+";
            op2 = "-";
        } else if (op1 == "minus" && op2 == "plus")
        {
            op1 = "-";
            op2 = "+";
        } else if (op1 == "minus" && op2 == "minus")
        {
            op1 = "-";
            op2 = "-";
        } else
        {
            cout << "\n Set as default \n" << endl;
            op1 = "+";
            op2 = "+";
        }

        cout << "\n " << a << "x^2" << op1 << b << "x" << op2 << c << endl;

        d = ((b * b) - 4 * a * c);

        if (d > 0){
            roots = "The quadratic has two distinct real number solution.";
        } else if (d == 0){
            roots = "The quadratic has a repeated real number solution.";
        } else {
            roots = "The quadratic has neither real numbers as its solution.";
        }

        cout << "\n Discriminant: " << d << endl;

        cout << " Nature of Roots: " << roots << endl;

        double num = 2;

        complex<double> x3 = sqrt(complex<double>((b*b)-4*a*c));
        complex<double> x4 = sqrt(complex<double>((b*b)-4*a*c));

        complex<double> x1 = (-b+x3);
        complex<double> x2 = (-b-x4);

        complex<double> x5 = x1/num*a;
        complex<double> x6 = x2/num*a;

        cout << " x1 = " << x5 << "  x2 = " << x6 << endl;

        } else if (a == 0){

            cout << "Invalid input." << endl;

        }
}

int main()
{
    Menu();

    if (mode == 1){
        QuadraticEquation();
    }

    while (yon == "N"){
        ExitMenu();
    } if(yon == "Y"){
        return 0;
    }
}
