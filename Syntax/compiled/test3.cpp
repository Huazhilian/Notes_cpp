#include <iostream>

int main(int argc, char* argv[]) { //receive command line arguments argument count and array of arguments
    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);
    std::cout << a * b << std::endl; //declare std:: if not using namespace std;
}
