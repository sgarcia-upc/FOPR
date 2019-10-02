#include <iostream>

using namespace std;


int main () {

    int i, number, result=0;
    cout <<  "Input a number: ";
    cin >>  number;
    i=0;
    while (i <= number){
        result += i*i;
        i++;
    }
    cout << "Result = " << result <<endl;

}
