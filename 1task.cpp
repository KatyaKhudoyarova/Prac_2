#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    int x;
    double r, r2;
    
    cout << "Enter x=";
    cin >> x;

    if (x >= 0) {
        r = (pow(M_E, (-x)) * (tan(1 / (pow(x, 2) + (8.2)))));
        cout << r;
    } else {
        r2 = (x * (((0.32 * x) + (2.5)) / (pow(x, 2) + 3)));
        cout << r2;
    }

    return 0;
}
