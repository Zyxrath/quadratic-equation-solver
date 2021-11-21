#include <string>
#include <iostream>
#include <cmath>
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

    int a, b, c, d;
    string op1, op2;

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

        cout << a << "x^2" << op1 << b << "x" << op2 << c << endl;

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
