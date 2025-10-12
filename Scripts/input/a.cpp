#include <iostream>
#include <string>
#include <vector>
using namespace std;

extern int maximum(int a, int b); // function prototype declaration
extern void reply(); // function prototype declaration
extern void variance();

int main(int argc, char* argv[]) { // argc: argument count, argv: argument vector
  vector<string> args(argv + 1, argv + argc); // convert argv to a vector of strings and skip the first element (program name)
  int a, b;
  cin >> a >> b;
  cout << "max of a and b is: " << maximum(a, b) << endl;
  cout << "Number of arguments: " << argc << endl;
  for (auto& arg : args) {
    cout << arg << endl;
  }

  reply();

  variance();
}