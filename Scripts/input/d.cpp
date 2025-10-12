#include <iostream>
#include <vector>
using namespace std;

void variance(){
    vector<int> v;
    double sum = 0, mean = 0, variance = 0, var_sum = 0;
    int num;
    cout << "Enter numbers (Ctrl+D or Ctrl+Z to stop): " << endl;
    while (cin >> num)
    {
        v.push_back(num);
        sum += num;
    }
    mean = sum / v.size();
    for (auto& n:v){
        var_sum += (n - mean) * (n - mean);
    }
    variance = var_sum / v.size();
    cout << "Mean is: " << mean << endl;
    cout << "Variance is: " << variance << endl;
}