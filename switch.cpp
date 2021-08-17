#include "iostream"
#include "string"
using namespace std;

int main() {
    int x = 5;
    switch (x+1) {
        case 1:
            cout << "cool";
            break;
        case 2:
            cout << "not cool";
            break;
        default:
            cout << "default";
    }

}
