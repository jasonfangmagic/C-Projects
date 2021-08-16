#include "iostream"
#include "string"
using namespace std;

int main(){
    bool x = !(1<2);
    bool y = true && false;
    cout << x;

}

/*
 ! not
 && and
 || or

 Simplified
 bool test = !(!false || !true);
           = !!false && !! true;
           = false && true;
 */