#include <bits/stdc++.h>
using namespace std;

int main() {
    long double h = 6.626e-34;
    long double c = 3e8;
    long double E;

    cout << "Enter E: ";
    cin >> E;

    long double f = E / h;
    long double ans = c / f;

    cout << "Frequency = " << f << " Hz" << endl;
    cout << "ans = " << ans << " m" << endl;

    return 0;
}