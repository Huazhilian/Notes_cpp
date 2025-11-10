#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, l;
    cout << "Enter dimention m, n, l for matrix A(m*n) and B(n*l): " << endl; 
    cin >> m >> n >> l;
    vector<vector<double>> A(m,vector<double>(n)), B(n,vector<double>(l)), C(m,vector<double>(l));
    
    cout << "\nEnter matrix A elements:" << endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> A[i][j];
        };}

    cout << "\nEnter matrix B elements:" << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<l;j++){
            cin >> B[i][j];
        };}

    cout << "\nA=" << endl;
    for (int i=0;i<m;i++){
        cout << (i!=0?" [":"[[");
        for (int j=0;j<n;j++){
            cout << B[i][j];
            cout << (j!=n-1?" ":(i!=m-1?"]\n":"]]\n"));
        }}

    cout << "\nB=" << endl;
        for (int i=0;i<n;i++){
            cout << (i!=0?" [":"[[");
            for (int j=0;j<l;j++){
                cout << B[i][j];
                cout << (j!=l-1?" ":(i!=n-1?"]\n":"]]\n"));
            }}
    
    cout << "\nA*B=" << endl;
        for (int i=0;i<m;i++){
            cout << (i!=0?" [":"[[");
            for (int j=0;j<l;j++){
                double sum = 0;
                for (int k=0;k<n;k++){
                    sum += A[i][k]*B[k][j];
                };
                C[i][j] = sum;
                cout << C[i][j];
                cout << (j!=l-1?" ":(i!=m-1?"]\n":"]]\n"));
            }}
};