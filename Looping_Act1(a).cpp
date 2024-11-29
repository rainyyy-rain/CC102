#include <iostream>

using namespace std;

int main() {
    int rows = 8;  // Number of rows in the pattern
    int colms = 8;  // Number of columns in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 0)) {
                cout << "# ";  // Print '#' for alternating cells
            } else {
                cout << "* ";  // Print '*' for alternating cells
            }
        }
        cout << endl;
    }

    return 0;
}
    