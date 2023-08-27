#include <iostream>
#include <cstdlib>
using namespace std;

bool isSymmetric (int M[100][100], int N) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < i; j++)
            if (M[i][j] != M[j][i]) 
                return false;

    return true;
}

int main () {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        // variables
        int N;
        int M[100][100];

        // Get N
        string str;
        getline(cin, str);
        N = str[4] - '0';

        // Read the matrix
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> M[i][j];

        // Output
        cout << "Test #" << i << ": ";
        if (isSymmetric(M, N)) cout << "Symmetric.";
        else cout << "Non-symmetric.";
        cout << endl;
    }
}