#include "iostream"
#include "map"
using namespace std;

int main() {
    map<char, int> mp = {
            {'J', 7},
            {'A', 8},
            {'s', 3}
    };
    mp['a'] = 9;
    mp.insert(pair<char,int>('j',8));
    mp.erase('J');

    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first <<endl;
        /*cout << itr->second << endl;*/
    }

}



