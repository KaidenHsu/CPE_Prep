#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int a, b, c, d, L;

    while (cin >> a >> b >> c >> d >> L) {
        int num = 0;
        if (!a && !b && !c && !d && !L) return 0;

        for (int i = 0; i <= L; i++) {
            int val = a*i*i + b*i + c;

            if (!(val % d)) num++;
        }

        cout << num << endl;
    }
}