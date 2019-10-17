#include <iostream>
using namespace std;

int main () {
    int a, cont=0;
    cin >> a;

    while (cont < a)
    {
        for (int x=0; x <= cont; x++ ){
            cout << "*";
        }  

        cout << endl;
        cont++;
    }
}
