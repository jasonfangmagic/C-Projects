#include "iostream"
#include "tuple"
using namespace std;


int main() {
    tuple <int, char, bool, float> things;
    things = make_tuple(23,'J', true, 23.5);
    tuple <int, char, bool, float>
    things2 = make_tuple(24,'A', false, 20.2);
    things.swap(things2);
    cout << get<0>(things) <<endl;
    cout << get<1>(things) <<endl;
    cout << get<0>(things2) <<endl;
    cout << get<1>(things2) <<endl;
}

// similar to arrays//
/*int main() {
    tuple <int, string> person(23, "Jason");
    cout << get <0> (person);
}*/

