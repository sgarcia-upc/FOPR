#include <iostream>
using namespace std;

int main () {
    int year;

    cin >> year;

    if ((year %400) == 0){
        cout << "Es bisiesto" << endl;
    }

    if ((year %4) == 0 && (year %100) != 0){
        cout << "El año es bisiesto" << endl;
    }
}
