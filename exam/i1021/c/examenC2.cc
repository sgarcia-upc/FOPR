
#include <iostream>
using namespace std;

int getComparebleNumbers(int num) {

        int cont = 3, n;
    if (num % 100 == 0){ 
        while (cont > 0)
        {
            n = num % 10;
            num = num/10;
            cont--;
        }
    } else {
        n = num %100;
    }

    return n;
}

int main () {

    int i, num, k=0;
    cin>>num;
    
    cout << "nombres que acaben igual que " << num << ":" << endl;
    while (cin>>i)
    {
        if (getComparebleNumbers(i) == getComparebleNumbers(num)){
            cout << i << endl;
//          cout << "COMPARACIO: " << getComparebleNumbers(num) << " " << getComparebleNumbers(i) << endl;
            k++;
        }

    }

    cout << "total: " << k << endl;
}
