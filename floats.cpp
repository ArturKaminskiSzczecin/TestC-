#include <cmath>
#include<iostream>
using namespace std;

bool approx_equals(double a, double b) {
    unsigned int x = a *1000000;
    unsigned int y = b *1000000;
    cout << x << '\n';
    cout << y << '\n';
    return x== y|| (x <= y +1000&& x>= y-1000);
}
int main(){

cout << approx_equals(175.9827, 82.25) << '\n';
cout << approx_equals(123.2345, 123.234501) << '\n';
cout << approx_equals(98.7655, 98.7654999) << '\n';
cout << approx_equals(-1.234, -1.233999) << '\n';
cout << approx_equals(1456.3652, 1456.3641) << '\n';
cout << approx_equals(-156.24037, -156.24038) << '\n';
}
