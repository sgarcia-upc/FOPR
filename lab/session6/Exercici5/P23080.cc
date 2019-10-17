#include <iostream>

using namespace std;

int main () {

    int input;
    bool first = true;

    while (cin>>input){
        if (first == false) 
            cout << endl;
        first = false;

        for (int i = 0; i < input; i++){
            for (int j = 0; j < input; j++){
                cout << input;
            }
                cout << endl;
        }

    }


}
