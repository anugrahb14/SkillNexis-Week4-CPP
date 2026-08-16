#include <iostream>
#include <stdexcept>
using namespace std;
double divideNumbers(double numerator, double denominator)
{
    if (denominator == 0)
    {
        throw runtime_error("Division by zero is not allowed!");
    }
    return numerator / denominator;
}
int main()
{
    double numerator, denominator;
    cout << "===== DIVISION EXCEPTION HANDLING =====" << endl;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    try
    {
        double result = divideNumbers(numerator, denominator);

        cout << "Result: " << result << endl;
    }
    catch (const runtime_error& e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
