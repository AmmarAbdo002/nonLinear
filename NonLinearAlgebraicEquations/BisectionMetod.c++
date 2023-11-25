#include <iostream>
#include <cmath>
using namespace std;
void BisectionMethod();
int main()
{
    BisectionMethod();
    return 0;
}

void BisectionMethod()
{
    double x;
    double f_x = pow(x, 6) - x - 1;
    double a, b;
    cout << "Enter the interval point :"<<endl;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    double f_a = pow(a, 6) - a - 1;
    double f_b = pow(b, 6) - b - 1;

    for (int i = 0; i < 3; i++)
    {
        double c = (a + b) / 2;
        double f_c = pow(c, 6) - c - 1;
        if ((f_c > 0 && f_a > 0)||(f_c < 0 && f_a < 0))
        {
            a=c;
        }

        if ((f_c > 0 && f_b > 0)||(f_c < 0 && f_b < 0))
        {
            b=c;
        }
    }
    cout<<"___________________________________________________"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
