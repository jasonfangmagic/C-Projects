#include "iostream"
#include "string"
using namespace std;

int main () {
    int x [] = {5, 6, 7, 8, 9, 10, 11, 12, 20, 30, 40, 50};

    for (int i = 0; i < sizeof (x)/sizeof (x[0]); i++) {

            cout << x[i] << endl;
    }

}

/*
int main () {

    for (int i = 10; i > 0; i-=4) {
        if (i % 2 == 0){
            cout << i << endl;
        }

    }

}*/
