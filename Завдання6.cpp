#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double r, P, S;
    cout << "Введіть радіус кола: ";
    cin >> r;

    P = 2 * PI * r; 
    S = PI * r * r; 

    cout << "Периметр P = " << P << ", Площа S = " << S << endl;
    return 0;
}





