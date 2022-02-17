#include <iostream>
using namespace std;

int& fff() {
    int x = 10;
    return x;
}
int main() {
    fff() = 30;
    cout << fff();
    return 1;
}
