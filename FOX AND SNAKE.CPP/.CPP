#include <iostream>
using namespace std;

int main() {
    int rows,cols;
    cin>>rows>>cols;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            // Full row of '#'
            for (int j = 0; j < cols; j++) {
                cout << "#";
            }
        } else if (i % 4 == 1) {
            // Row with dots followed by '#'
            for (int j = 0; j < cols - 1; j++) {
                cout << ".";
            }
            cout << "#";
        } else {
            // Row with '#' followed by dots
            cout << "#";
            for (int j = 0; j < cols - 1; j++) {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
