#include <iostream>

using namespace std;

double myNegPow(double x, int n) {
    double answer = 1;
    for (int i = 0; i > n; --i)
        answer *= x;
    return 1 / answer;
}

double myPosPow(double x, size_t n) {
    double answer = 1;
    for (int i = 0; i < n; ++i)
        answer *= x;
    return answer;
}

double myPow(double x, int n) {
    if (x == 1)
        return 1;
    else if (x == -1) {
        if (abs(n % 2) == 1)
            return -1;
        else
            return 1;
    }

    if (n == 0)
        return 1;
    else if (n < -1023)
        return 0;
    else if (n < 0)
        return myNegPow(x, n);
    else
        return myPosPow(x, n);
}

int main() {
    cout << myPow(2, -2147483648) << endl;
    return 0; 
}   
