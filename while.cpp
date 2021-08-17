#include "iostream"
#include "string"
using namespace std;


int main() {
    int x = 10;
    do { int add;
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "x is: " << x << endl;
    }
    while(x < 10);
}

/*int main() {
    int x = 10;
        int add;
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "x is: " << x << endl;
        while (x < 10) {
            cout << "Type a number to add to x: ";
            cin >> add;
            x += add;
            cout << "x is: " << x << endl;
        }
    }*/


/*int main(){
    for (int i=0; i<10; i++) {
        if (i == 9 || i == 7){
            continue;
        }
        cout << i << endl;
    }
}*/





/*int main() {
    int input = -1;
    while (true){
        cout<< "Type the number 1 or 2: ";
        cin >> input;
        if (input == 1 || input ==2){
            cout << "hi";
            break;

        } else if (input == 4){
            cout<< "fine";
            break;
        }
    }
}*/





/*int main() {
    int input = -1;
    while (input != 1 && input != 2){
        cout<< "Type the number 1 or 2: ";
        cin >> input;
    }
}*/




/*
using namespace std;
int main() {
    int i =0;
    while (i<10){
        cout << i<< endl;
        i++;

    }
}
*/




/*int main() {
    for (int i = 0; i < 10; i++){
        cout << i<< endl;
    }

}*/

