#include "iostream"
#include "string"
using namespace std;

int main() {
    int a = 2;
    int &b = a;
    b = 4;
    cout << a << endl;
    cout << b << endl;
}
