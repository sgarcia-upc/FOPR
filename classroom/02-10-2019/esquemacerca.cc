#include <iostream>

using namespace std;


int main () {

    int number, orig_num, numtocheck;

    bool found = false;
    cout <<  "Input a number: ";
    cin >>  number;
    orig_num = number;

    while (number > 0 and not found){
        numtocheck = number % 10;

        if (numtocheck % 2 == 0){
            found=true;
        }
        number = number/10;
    }

    if (found){
        cout << "El numero: " << orig_num << " contiene almenos un numero par";
    } else {
        cout << "El numero: " << orig_num << " NO contiene almenos un numero par";
    }

}
