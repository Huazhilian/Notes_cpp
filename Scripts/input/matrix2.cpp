#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<double>> matrix;

    cout << "Enter matrix elements (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++) {
        vector<double> row;
        for (int j = 0; j < n; j++) {
            double val;
            cin >> val;   // -1 is fine
            row.push_back(val);
        }
        matrix.push_back(row);
    }

    cout << "\nMatrix:\n";
    for (auto &row : matrix) {
        for (auto x : row) cout << x << " ";
        cout << endl;
    }
}
