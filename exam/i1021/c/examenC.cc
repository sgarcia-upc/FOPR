#include <iostream>

using namespace std;

int main () {

    int i, num, k=0;
    cin>>num;
    

    cout << "nombres que acaben igual que " << num << ":" << endl;
    while (cin>>i)
    {
        if (i%100 == num%100){
            cout << i << endl;
            k++;
        }

    }

    cout << "total: " << k << endl;
}
