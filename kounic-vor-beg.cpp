#include<bits/stdc++.h>
using namespace std;

int main() {
    long double h = 6.626e-34;
    float P = 3.1416;
    int n;
    cout << "Enter kokhopoth number:";
    cin >> n;

    cout << "mvr = "<<(n * h) /(2 * P)<<" J.s"<<endl;
    return 0;
}