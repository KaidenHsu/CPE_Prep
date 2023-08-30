#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int dividend, divisor;

    while (cin >> dividend >> divisor) {
        // Edge case
        if (dividend == 1) {
            cout << "[0;" << divisor << "]" << endl;
        } else {
            for (int i = 0; dividend != 1; i++) {
                switch (i) {
                    case 0:
                        cout << '[';
                        break;
                    case 1:
                        cout << ';';
                        break;
                    default:
                        cout << ',';
                }

                cout << dividend / divisor;
                dividend = dividend % divisor;
                swap(dividend, divisor);
            }

            cout << ']' << endl;
        }
    }
}