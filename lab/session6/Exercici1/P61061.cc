#include <iostream>
using namespace std;

void mensaje (int a, int b){
    cout << "The product of the digits of " << a << " is " << b << "." << endl;
}

int main () {

    int param_num=, temp_num, original, e, resultado=1;
    
    while (cin >> param_num ){
        if (param_num >= 0 and param_num <= 9){
            mensaje(param_num, param_num); 
        } else {
            temp_num = 1;
            e = param_num % 10;
            original=param_num;

            while (param_num>0){
                resultado = resultado*e;
                param_num=param_num/10;
                e = param_num % 10;
            }
            param_num=resultado;
            mensaje (original, resultado);
        }
        cout << "----------"<< endl;
    } 
}
