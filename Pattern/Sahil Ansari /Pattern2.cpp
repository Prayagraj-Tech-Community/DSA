#include <iostream>
using namespace std;

int main() {
    int n = 5; // height of the pattern

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i == 1 && j == 3) || 
                (i == 2 && j == 3) || 
                (i == 3) || 
                (i == 4 && j == 3) || 
                (i == 5 && j == 3)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
