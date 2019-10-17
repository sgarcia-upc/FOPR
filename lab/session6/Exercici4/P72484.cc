#include <iostream>

using namespace std;

int main(){

    int ast, space, cont=0, ort;
    cin >> ast;
    bool invert = true;
    ort = ast*2-1;
    space = ast-1;
    ast = ast-space;

    while (cont < ort)
    {
        
        for (int i=0; i < space; i++){
            cout << " ";
        } 

        for (int i=0; i < ast; i++){
            cout << "*";
        } 
        cout << endl;


        if (invert){
            ast++;
            ast++;
            space--;
        } else {
            space++;
            ast--;
            ast--;
        }

        if (space == 0 ){
            invert=false;
        }
        cont++;
    }

}
