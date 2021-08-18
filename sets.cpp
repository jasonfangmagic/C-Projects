#include "iostream"
#include "set"
using namespace std;

int main() {
    set<char> s1 = {'w', 'r', 'r', 'w', 't'};

    for (auto itr = s1.begin(); itr != s1.end(); ++itr) {
        cout << *itr <<endl;
    }
}

