#include <iostream>

using namespace std;

int main () {
    int num, another, cont=1;

    cin >> num;

    while (cin >> another and another != -1)
    {
        if (cont == num) 
        {
            cout << "At the position " << num  << " there is a(n) "<< another << "." << endl; 
        }
        cont++;
    }
}
