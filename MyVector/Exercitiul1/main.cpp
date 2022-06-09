#include <iostream>
using namespace std;

float operator"" _Kelvin(unsigned long long int x) {
    return x - 273.15;
}
float operator"" _Fahrenheit(unsigned long long int x) {
    return (x * 1.8) + 32;
}

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout << a << endl << b;
    return 0;
}