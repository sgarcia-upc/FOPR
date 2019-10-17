#include <iostream>

using namespace std;

void noms_ordenats(string s1, string s2, string s3){
    // Pre: s1, s2, s3 son strings
    // Post: Mostra per pantalla els strings ordenats

    string saux = "";
   

    // Compare String 1 and String 2 
    if (s1 >= s2){
        saux=s2;
        s2=s1;
        s1=saux;
    }

    // comapre String 1 with String 3
    if (s1 >= s3){
        saux=s1;
        s1=s3;
        s3=saux;
    }

    // comapre String 2 with String 3
    if (s2 >= s3){
        saux=s2;
        s2=s3;
        s3=saux;
    }

    cout << s1 << " " <<  s2 << " " << s3 << endl;
}

int main () {
    string s1, s2, s3,  saux;

    cin >> s1;
    cin >> s2;
    cin >> s3;

    noms_ordenats(s1,s2,s3);
}
