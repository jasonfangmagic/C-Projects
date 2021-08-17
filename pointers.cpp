#include "iostream"
#include "string"
using namespace std;

int main() {
    int x[] = {1, 2, 3};
    int *head = x;
    cout << head << endl;

    for ( int i =0; i < 3; ++i){
        head = x + i;
        cout << head <<endl;
    }

}
